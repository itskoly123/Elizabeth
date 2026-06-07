#include<stdio.h>
#include<stdlib.h>
int main()
{int num,count=0;
printf("请输入一个整数:");
scanf("%d",&num);
if(num==0){
	count=1;
}
else{
	int temp=abs(num);
	while(temp>0){
		count++;
		temp/=10;
	}
}
printf("该数的位数是：%d\n",count);
return 0;
} 
