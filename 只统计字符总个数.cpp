#include<stdio.h>
int main(){
	int c,v;
	printf("请输入一串字符：\n");
	for(c=0;;c++){
		v=getchar();
		if(v=='\n') break;
		else c++;
	}
	printf("总字符个数有%d",c);
	return 0;
} 
