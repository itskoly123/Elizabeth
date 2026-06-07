#include<stdio.h>
int age(int x,int y){
	if(x>65){
		y=0;
	}else if(x<=0){
		printf("该游客不存在！");
		return -1;
	}else if(x<=14){
		y=y*0.5;
	}else{
		y=y*1;
	}
	return y;
}
int main(){
	int a,m;
	int p=0;
	printf("请输入游览月份：");
	scanf("%d",&m); 
	printf("请输入游客年龄：");
	scanf("%d",&a);
	switch(m){
		case 1:case 2:case 3:case 4:case 5:case 10:case 11:case 12:
			p=180;
			break;
		case 6:case 7:case 8:case 9:
		    p=200;
		    break;
		default:printf("输入错误\n");
		return -1;
	}
	int result=age(a,p);
	if(result!=-1){
	printf("该游客应付费用为%d",result);
	}
	return 0;
}






 
