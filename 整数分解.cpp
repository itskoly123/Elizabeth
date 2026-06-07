#include<stdio.h>
int main(){
	int x;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	int t=x;
	int mask=1;
	while(t>9){
		t=t/10;
		mask*=10;
	}
	printf("mask=%d\n",mask);
	int d=0;
	do{
		d=x/mask;
		printf("%d",d);
		if(mask>9)
		printf(" ");
		x%=mask;
		mask/=10;
	}while(mask>0);
}
