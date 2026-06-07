#include<stdio.h>
int main(){
	int x;
	printf("请输入一个即将被倒序的整数\n");
	scanf("%d",&x);
	int t,total=0; 
	do{
	t=x%10;
//	printf("%d",t);
    total=total*10+t;
    printf("x=%d,t=%d,total=%d\n",x,t,total);
	x/=10;
    }while(x>0);
    printf("%d",total);
    return 0;
} 
