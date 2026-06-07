#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,s,l;
printf("请输入三条边的数值：");
scanf("%f,%f,%f",&a,&b,&c); 
if(a+b>c&&a+c>b&&b+c>a)
{l=(a+b+c)/2.0;
s=sqrt(l*(l-a)*(l-b)*(l-c));
printf("三角形的面积为%f",s);
}else{
printf("三条边不能构成三角形"); 
}
}
