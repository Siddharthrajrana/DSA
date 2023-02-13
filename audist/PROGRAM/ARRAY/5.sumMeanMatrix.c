#include<stdio.h>
int main()
{
	int i,sum=0,j,row,col,mat[10][10];
	printf("Enter the row and column of the matrix:");
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&mat[i][j]);
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		 sum+=mat[i][j];
	}
	
	printf("Sum =%d",sum);
	printf("\nMean =%d",sum/(row*col));
	return 0;
	
	
}
