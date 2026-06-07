#include<stdio.h>
int main()
{double a,b;
char ch;
printf("请输入数字、符号、数字：");
scanf("%lf%c%lf",&a,&ch,&b);
switch(ch)
{ case '+':printf("%.2lf %c %.2lf=%.2lf\n",a,ch,b,a+b);break;
case '-':printf("%.2lf %c %.2lf=%.2lf\n",a,ch,b,a-b);break;
case '*':printf("%.2lf %c %.2lf=%.2lf\n",a,ch,b,a*b);break;
case '/':
	if(b!=0)
	{ 
	   printf("%.2lf %c %.2lf=%.2lf\n",a,ch,b,a/b);break;
	}else{printf("错误,除数不能为零！\n");
	}break;
default:
		printf("错误,不支持的运算符！\n");
		break;
	}
	return 0;
 }
