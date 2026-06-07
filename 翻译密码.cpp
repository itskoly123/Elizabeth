#include<stdio.h>
int main(){
	 char str[50];
	 char ch;
	 int i=0;
	 printf("请输入字符串(回车键结束)\n");
	 while((ch=getchar())!='\n'&&i<49){
	 	str[i]=ch;
	 	i++;
	 }
	 str[i]='\0';
	 for(int j=0;j<i;j++){
	 	if(str[j]>=65&&str[j]<=122){
	 		if(str[j]>=91&&str[j]<=96){
	 			printf("输入错误！"); 
			 }
			 else if(str[j]>=87&&str[j]<=90||str[j]>=119){
			 	str[j]=str[j]-25;
			 }
			 else{
	 	        str[j]=str[j]+4;
			 }
		 }
	 }
	 printf("结果%s",str);
} 
