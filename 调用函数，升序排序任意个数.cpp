#include<stdio.h>
void order(int str[],int x){
	int i,j;
	for(i=0;i<x-1;i++){
		int temp;
		for(j=0;j<x-i-1;j++){
			if(str[j]>str[j+1]){
			temp=str[j];
			str[j]=str[j+1];
			str[j+1]=temp;
			} 
		}
	}
}
int main(){
	int arr[100];
	int c,i,j,temp;
	i=0;
	c=0;
	printf("请你输入多个正整数(0结束)：\n");
	scanf("%d",&temp);
	while(1){
		if(temp==0){
			break;
		}
		arr[i]=temp;
		c++;
		i++;
		scanf("%d",&temp);
	}
	printf("\n");
	order(arr,c);
	printf("这几个数的升序排序:\n");
	for(j=0;j<c;j++){
		printf("%6d",arr[j]);
	}
	return 0;
}
