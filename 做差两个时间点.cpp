#include<stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("请输入分别两个时间起点和终点\n");
	scanf("%d:%d",&hour1,&minute1);
	scanf("%d:%d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t0=t2-t1; 
	printf("算出该时间段为\n");
	printf("%d小时%d分钟",t0/60,t0%60);
	return 0;
}
