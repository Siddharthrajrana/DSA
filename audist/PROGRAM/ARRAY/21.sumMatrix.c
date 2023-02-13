#include<stdio.h>
int main()
{
	int i,count=0,j,row,col,mat1[10][10],mat2[10][10];
	printf("Enter the row and column of first the matrix:");
	scanf("%d %d",&row,&col);
	printf("Enter the Element of first matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&mat1[i][j]);
	}
    printf("Enter the Element of second matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&mat2[i][j]);
	}
	
	printf(" first Matrix is:\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%5d",mat1[i][j]);
		
		printf("\n");
	}
	
	printf(" second Matrix is:\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%5d",mat2[i][j]);
		
		printf("\n");
	}
	int sum=0;
	printf("Matrix after XA+YB:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
		  sum=2*(mat1[i][j])+3*(mat2[i][j]);
		  printf("%5d",sum); 
	    }
	    printf("\n");
	}
	
	
	return 0;
	
	
}
