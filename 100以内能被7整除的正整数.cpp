#include<stdio.h>
int main(){
	int i;
	int c=1;
	printf("以下是100以内能被7整除的正整数:\n"); 
	for(i=1;i<=100;i++){
		if(i%7!=0) continue;
		(c==10)?(printf("%d\n",i),c=1):(printf(" %d",i),c++,getchar());
    }
	return 0;
} 
