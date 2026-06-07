#include<stdio.h>
#include<conio.h>
int main()
{char choose;
printf("|----------------------------|\n");
printf("|    学生成绩管理系统，请选择数字进行相应操作  |\n");
printf("|1：录入学生成绩，输入完成按“#”结束；       |\n");
printf("|2：显示学生成绩；       |\n");
printf("|3：查询学生成绩；        |\n");
printf("|4：修改学生成绩；         |\n");
printf("|5：添加学生记录；          |\n");
printf("|6：删除学生记录；          |\n");
printf("|7：排序学生成绩；          |\n");
printf("|0：退出该系统；             |\n");
printf("|----------------------------|\n");
printf("请在0~7中选择\n");
choose=getchar();
switch(choose)
{
	case '1':
		{
			printf("您选择了菜单项：1\n");
			break;
		}
	case '2':
		{
			printf("您选择了菜单项：2\n");
			break;
		}
	case '3':
		{
			printf("您选择了菜单项：3\n");
			break;
		}
	case '4':
		{
			printf("您选择了菜单项：4\n");
			break;
		}
	case '5':
		{
			printf("您选择了菜单项：5\n");
			break;
		}
	case '6':
		{
			printf("您选择了菜单项：6\n");
			break;
		}
	case '7':
		{
			printf("您选择了菜单项：7\n");
			break;
		}
	case '8':
		{
			printf("您选择了菜单项：8\n");
			break;
		}
	case '0':
		{
			printf("退出系统");
			break;
		}
 } 
}
