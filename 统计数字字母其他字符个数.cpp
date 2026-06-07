#include<stdio.h>
int main(){
    char str[100];
    int letters=0,digits=0,others=0;
	int total=0;
    printf("请输入一串字符:");
	char ch;
	while((ch=getchar())!='\n'&&total<=99){
			str[total]=ch;
		if(ch>='a'&&ch<='z'){
			letters++;
		}
		else if(ch>='0'&&ch<='9'){
			digits++;
		}
		else{
		others++;
		}
		total++;
	}
	str[total]='\0';
	printf("字母个数有:%d",letters);
	printf("数字个数有:%d",digits);
	printf("其他字符个数有:%d",others);
	printf("总字符个数有:%d",total);
	printf("输入的字符串是:%s",str);
	printf("\n");
	return 0;
}
