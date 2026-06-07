#include<stdio.h>
long factorial(int x);
int main(){
	long sum=0;
	int a,b;
	printf("请分别输入起点数和终点数两个\n");
	scanf("%d%d",&a,&b);
	for(int k=a;k<=b;k++){
	sum+=factorial(k);
	}
	printf("sum=%d的%d次方的阶乘到%d的%d次方的阶乘=%d",a,a,b,b,sum);
	return 0;
}
long factorial(int x){
	long x_x=1;
	for(int i=0;i<x;i++){
		x_x*=x;
	}
	long x_factor=1;
	for(int j=1;j<=x_x;j++){
		x_factor*=j;
	}
	return x_factor;
}
