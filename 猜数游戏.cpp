#include<stdio.h>
int main(){
	int n;
	printf("欢迎来到猜数游戏！\n");
	printf("请输入一个1~9之间的数字：");
	scanf("%d",&n);
	if(n<1||n>9){
		printf("输入错误,请输入1~9之间的数字！\n");
		return 1;
	} 
	printf("100以内能被%d整除且个位数也是%d的整数有：\n",n,n);
	int count=0;
	for(int i=0;i<10;i++){
		int num=i*10+n;
		if(num<=100){
			if(num%n==0){
				printf("%d ",num);
				count++;
			}
		}
	}
	printf("\n总共找到了%d个符合条件的数字。\n",count);
	printf("猜数完毕！\n");
	return 0;
}
