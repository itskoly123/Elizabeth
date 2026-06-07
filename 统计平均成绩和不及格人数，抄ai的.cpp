#include<stdio.h>
int main(){
	int score;
	int sum=0;
	int count=0;
	int fail_count=0;
	printf("请输入学生成绩(输入负数结束)：\n");
	while(1){
		scanf("%d",&score);
		if(score<0){
			break;
		}
		sum+=score;
		count++;
		if(score<60){
			fail_count++;
		}
	}
	if(count>0){
		float average=(float)sum/count;
		printf("\n统计结果：\n");
	    printf("总人数：%d\n",count);
	    printf("平均分：%.2f\n",average);
	    printf("不及格人数：%d\n",fail_count);
	}else{
		printf("没有输入有效值！\n");
	}
	return 0;
}
