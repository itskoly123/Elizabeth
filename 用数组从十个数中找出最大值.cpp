#include<stdio.h>
int main(){
	int numbers[10];
	int i,max; 
    printf("请输入10个数:\n");
	for(i=0;i<10;i++){
		printf("第%d个数:",i);
		scanf("%d",&numbers[i]);
	}	
	max=numbers[0];
	for(i=1;i<10;i++){
		if(numbers[i]>max){
		max=numbers[i];
		}
	}
	printf("这10个数中的最大值是：%d\n",max);
	return 0;
	
}

