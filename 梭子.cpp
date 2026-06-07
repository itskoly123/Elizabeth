#include<stdio.h>
int main(){
	int i,j,k=0;
	for(i=1;i<8;i++){
		if(i<4) 
		   k++;
		else 
		   k--;
		for(j=1;j<=4-k;j++){
		    printf(" ");
		} 
		for(j=1;j<=2*k-1;j++){
		    printf("*"); 
		}
		printf("\n"); 
	}
	return 0;
}
