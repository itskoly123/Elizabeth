#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<8;i++){
		if(i<4){
		for(j=1;j<4-i;j++){
			printf(" ");
		}printf("*\n");
		}else{
			for(j=1;j<=i-4;j++){
				printf(" ");
			}printf("*\n");
		}
	}
	return 0;
}
