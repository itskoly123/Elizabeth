#include<stdio.h>
int main(){
	char str[50];
	int i=0,j=0;
	char ch;
	printf("请输入一串字符\n");
	while((ch=getchar())!='\n'&&i<49){
		str[i]=ch;
		i++;
	}
	str[i]='\0';
	for(j=0;j<i;j++){
		if(str[j]>=65&&str[j]<=122){
			if(str[j]<=68||(str[j]>=97&&str[j]<=100)){
			str[j]=str[j]+22;
			}
		    else if(str[j]>=91&&str[j]<=96){
		printf("警告！你输入的字符%c不是字母\n",str[j]);
			}
			else{
				str[j]=str[j]-4;
			}
		}
		else{
		printf("警告！你输入的字符%c不是字母\n",str[j]);
				}
	}
	printf("%s",str);
	return 0;
} 
