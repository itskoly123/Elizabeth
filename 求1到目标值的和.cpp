#include<stdio.h>
int sum(int x){
	int sum=0;
	for(;x>0;x--){
		sum+=x;
	}
	return sum;
}
	
int main(){
	int result=0;
	int a=0;
	printf("请输入一个从1累加的目标值\n");
	scanf("%d",&a);
	result=sum(a);
	printf("从1累加到%d的值为%d",a,result); 
	return 0;
} 
