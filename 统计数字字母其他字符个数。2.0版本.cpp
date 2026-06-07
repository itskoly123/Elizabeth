#include<stdio.h>
int main(){
	int l=0,d=0,o=0,t=0;
	char ch;
	printf("请输入一串字符：\n");
	while(1){
		ch=getchar();
		if(ch<'9'&&ch>'0'){
			d++;
		}else if(ch>'a'&&ch<'z'){
			l++;
		}else if(ch<'Z'&&ch>'A'){
			l++;
		}else if(ch=='\n'){
		    break;
		}else{
			o++;
		}
		t++;
	}
	printf("字母有%d个",l);
	printf("数字有%d个",d);
	printf("其他字符有%d个",o);
	printf("总字符有%d个",t);
	return 0;
} 
