#include<stdio.h>
int main(){
	printf("----------前n项和之1/n----------\n");
	double sum=0.0;
	double a[100];
	int n;
	printf("请输入n的值吧\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a[i]=1.0/(i+1);
		sum+=a[i];
	}
	printf("%f=1",sum);
	for(int j=1;j<n;j++){
		printf("+%f",a[j]);
	}
	return 0;
}
