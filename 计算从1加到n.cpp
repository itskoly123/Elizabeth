#include<stdio.h>
int main(){
    int i,n,sum;
    printf("请输入一个正整数n:");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++){
    	sum+=i;
	}
	printf("从1加到n等于%d",sum);
	return 0;
}

