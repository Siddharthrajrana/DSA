#include<stdio.h>
int main()
{
	int i,j,row,col,mat1[10][10],Evenarr[10],Oddarr[10];
	printf("Enter the row and column of  the matrix:");
	scanf("%d %d",&row,&col);
	printf("Enter the Element of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&mat1[i][j]);
	}

	
	printf("  Matrix is:\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%5d",mat1[i][j]);
		
		printf("\n");
	}
	int num,k=0,k1=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
		  num=mat1[i][j];
		  if(num%2==0)
		   Evenarr[k++]=num;
		  else
		   Oddarr[k1++]=num; 
	    }
	    
	}
	
	printf("\nOdd Element Array is:");
	for(i=0;i<k1;i++)
	 printf("%d ",Oddarr[i]);
	 
	 
	printf("\nEven Element Array is:");
	for(i=0;i<k;i++)
	 printf("%d ",Evenarr[i]);
	

		
	
	return 0;
	
	
}
