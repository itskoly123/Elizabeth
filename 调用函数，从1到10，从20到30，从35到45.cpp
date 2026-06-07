#include<stdio.h>
void sums(int begin,int end){
	int result=0;
	//for(;begin<=end;begin++){
	//	result+=begin;
	//}					你这样写，begin的值一直在增加，直到=end；
	for(int i=begin;i<end;i++){
		result+=i;
	} 
	printf("从%d到%d累加的结果为%d\n",begin,end,result);
}
int main(){
	sums(1,10);
	sums(20,30);
	sums(35,45);
	return 0;
}
