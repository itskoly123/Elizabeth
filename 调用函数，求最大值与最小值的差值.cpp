#include<stdio.h>
float min(float x,float y,float z){
	int temp;
	temp=x<y?x:y;
	return temp<z?temp:z;
}
float max(float x,float y,float z){
	int temp;
	temp=x>y?x:y;
	return temp>z?temp:z;
}
int main(){
	float a,b,c;
	float mi,ma;
	printf("请输入三个数(空格)：\n");
	scanf("%f%f%f",&a,&b,&c);
	mi=min(a,b,c);
	ma=max(a,b,c);
	printf("最大值为%f\n",ma);
	printf("最小值为%f\n",mi);
	printf("最大值与最小值的差值%f-%f=%f\n",ma,mi,ma-mi); 
	return 0;
}
