#include<stdio.h>
int main(){
	 int n,i,e=-1;
	 float sum=0;
	 printf("请输入一个整数：");
	 scanf("%d",&n);
	 if(n>0){
	 for(i=0;i<=n;i++){
	 	e*=-1;
	 	sum+=1.0/(1+(3*i))*e;
	    } 
	 	printf("前%d项和为%f",n,sum);
    }else{
    	printf("您输入的数不是正整数,不能运行！"); 
	}
	return 0;
}
