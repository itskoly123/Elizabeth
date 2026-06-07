#include<stdio.h>
const int size=3;
int main(){
	int board[size][size];
	int i,j;
	int numofxh,numofxl;
	int numof0h,numof0l;
	int result=-1;//-1√ª»À”Æ£¨1x”Æ£¨00”Æ
	for(i=0;i<size;i++)
		for(j=0;j<size;j++)
			scanf("%d",&board[i][j]);
		printf("\n");
	for(i=0;i<size;i++){
		numofxh=numofxl=numof0h=numof0l=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1)
				numofxh++;
			else if(board[j][i]==1)
				numofxl++;
			else if(board[i][j]==0)
				numof0h++;
			else if(board[j][i]==0) 
				numof0l++;		
		}
	}
	for(i=0;i<size;i++){
		numof0h=numof0l=numofxh=numofxl=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1&&i==j)
				numofxh++;
			else if(board[i][j]&&i+j==size-1)
				numofxl++;
			else if(board[i][j]==0&&i==j)
				numof0h++;
			else if(board[i][j]==0&&i+j==size-1)
				numof0l++;
		}	
	}
	if(numofxh==size||numofxl==size)
		result=1;
	else if(numof0h==size||numof0l==size)
		result=0;
	printf("%d",result);
	return 0; 
}
