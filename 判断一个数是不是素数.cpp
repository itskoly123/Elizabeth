#include<stdio.h>
int main(){
	int x,y;
	printf("请输入一个正整数：");
	scanf("%d",&x);
	for(y=2;y<=x-1;y++){
		if(x%y==0) break;
	} 
	if(x==y)
	printf("%d是素数\n",x);
	else
	printf("%d不是素数\n",x);
	return 0;
}
