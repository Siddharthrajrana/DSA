#include<stdio.h>
int main()
{
	int i,sum=0,j,row,col,mat[10][10];
	printf("Enter the row and column of the matrix:");
	scanf("%d %d",&row,&col);
	printf("Enter the Element of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&mat[i][j]);
	}
    
	printf("Matrix is:\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%5d",mat[i][j]);
		
		printf("\n");
	}
		
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
		 if(i==j)
		  sum+=mat[i][j];
	   }
	}
	
	printf("Sum of diagonal  Element =%d",sum);
	return 0;
	
	
}
