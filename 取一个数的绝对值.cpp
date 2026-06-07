#include<stdio.h>
int main(){
	int z;
	printf("请输入一个整数：\n");
	scanf("%d",&z);
	if(z>=0) printf("%d",z);
	else printf("%d",-z);
	return 0;
}
