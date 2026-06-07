#include<stdio.h>
int main(){
	int x;
	int one,two,five;
	printf("一角,两角,五角"); 
	printf("请输入要凑的面额：\n");
	scanf("%d",&x);
	for(one=0;one<x*10;one++){
		for(two=0;two<x*5;two++){
			for(five=0;five<x*2;five++){
				if(one*1+two*2+five*5==x*10){
					printf("%d张一角%d张两角%d张五角凑成的%d元\n",one,two,five,x);
				}
			}
		}
	}
}	
 
