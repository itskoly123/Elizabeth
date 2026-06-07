#include<stdio.h>
void f(int v){
	if(v>0)
		printf("1");
	else
		printf("0");
}
int main(){
	int a[5],i;
	printf("请输入5个整数\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		f(a[i]);
	}
}
