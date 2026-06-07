#include<stdio.h>
int max(int str[],int n);
int main(){
	int str[5];
	int m;
	printf("请输入五个整数(用空格):");
	for(int k=0;k<5;k++){
		scanf("%d",&str[k]);
	}
	m=max(str,5);
	printf("\n最终的排序结果:\n");
	for(int i=0;i<5;i++){
		printf("%5d",str[i]);
	} 
	printf("\n其中最大值为%d\n",m);
	return 0;
}
int max(int str[],int n){
	int t;
	printf("\n开始冒泡排序\n");
	for(int i=0;i<n-1;i++){
		printf("第%d轮排序：",i+1); 
	    for(int j=0;j<n-i-1;j++){
	      if(str[j]>str[j+1]){
	      	t=str[j];
	      	str[j]=str[j+1];
	      	str[j+1]=t;
		  } 
		}
	    for(int k=0;k<n;k++){
	    	printf("%5d",str[k]);
		}
		printf("\n");
	}
	return str[n-1];
}
