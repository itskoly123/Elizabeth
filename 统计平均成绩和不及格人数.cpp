#include<stdio.h>
int main(){
	int g,sum=0;
	int w=0,t;
	double a=0.0;
	printf("请输入一批学生成绩：");
	for(t=0;getchar()!='\n';){
		scanf("%d",&g);
		if(g>=0){
		t++;
		sum+=g;
		if(g<=60){
			w++;
		}
		}else{
		continue;
		} 
	} 
	a=sum/t;
	printf("他们的平均成绩是%f",a);
	printf("不及格的人数有%d",w); 
	return 0;
}
