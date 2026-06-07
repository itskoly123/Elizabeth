#include<stdio.h>
int main(){
	char str[100];
	int i=0;
	printf("请输入一行小写字母:");
	char ch;
	while((ch=getchar())!='\n'&&i<99){
		str[i++]=ch;
	}
	str[i]='\0';
	printf("转化为大写后:");
	for(int j=0;j<i;j++){
		if(str[j]>='a'&&str[j]<='z'){
			putchar(str[j]-32);
		}else{
			putchar(str[j]);
		}
	}
	printf("\n"); 
	return 0;
}
