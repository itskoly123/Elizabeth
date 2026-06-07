#include<stdio.h>
void print(char b[4][100]);
int main(){
	char name[4][100];
	printf("请输入4个姓名：\n");
	for(int i=0;i<4;i++)
		gets(name[i]);
	printf("调用函数输出4个姓名：\n");
	print(name);
	return 0;
}
void print(char b[4][100]){
	for(int j=0;j<4;j++)
		printf("%s\n",b[j]); 
}
