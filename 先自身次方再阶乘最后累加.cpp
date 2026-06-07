#include<stdio.h>
long ncn(int x);
long jc(int y);
int main(){
	int a,b;
	long s=0,f;
	printf("请输入起点数a和终点数b:\n");
	scanf("%d%d",&a,&b);
	printf("s="); 
	for(int k=a;k<=b;k++){
		f=jc(k);
		s+=f;
		if(k>a) printf("+");
		printf("%ld",f);
	}
	printf("=%ld",s);
	printf("\n");
	return 0;
}
//long ncn(int x){
//	for(int i=1;i<x;i++)		x不先保存，导致x一直在变化 
//		x*=x;
//	return x;
//}
long ncn(int x){
	long n=1;
	for(int i=0;i<x;i++)
		n*=x;
	return n;
} 
long jc(int y){
	int z;
	z=ncn(y);
	long factor=1;
	for(int j=1;j<=z;j++)
		factor*=j;
	return factor;
}
