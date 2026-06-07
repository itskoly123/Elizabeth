#include<stdio.h>
int main(){
	int i;
	float a[5];
	printf("请输入数组的5个元素：\n");
	for(i=0;i<=4;i++)
		scanf("%f",&a[i]);
	printf("正序输出数组：\n");
	for(i=0;i<=4;i++)
	    printf("%9f",a[i]);
	printf("\n你虚输出数组：\n");
	for(i=4;i>=0;i--)
	    printf("%9f",a[i]);
} 
