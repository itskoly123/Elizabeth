#include<stdio.h>
int gcd(int a,int b){
	int temp;
	while(b){
		temp=a%b;
		a=b;
		b=temp; 
	} 
	return a;
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	int num1,num2;
	printf("请输入两个自然数:\n");
	scanf("%d,%d",&num1,&num2);
	int g=gcd(num1,num2);
	int l=lcm(num1,num2);
	printf("%d和%d的最大公约数是%d\n",num1,num2,g);
	printf("%d和%d的最大公倍数是%d\n",num1,num2,l);
	return 0;
}

