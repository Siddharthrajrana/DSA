#include<stdio.h>
#include<stdlib.h>
struct student 
{
	char name[20];
	int rollno;
	float marks;
};
main()
{
	int i,n;
		
	printf("Enter number of student:");
	scanf("%d",&n);
     struct student stuarr[n];
	for(i=0;i<n;i++)
	{
	  printf("Enter name, roll and marks");
		  //scanf("%s %d %f",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
	scanf("%s",&stuarr[i].name);
	  scanf("%d",&stuarr[i].rollno);
	  scanf("%f",&stuarr[i].marks); 
	
	}
	for(i=0;i<n;i++)
	{
	
	printf("%s",stuarr[i].name);
    	printf("%d \n",stuarr[i].rollno);
	  printf("%f \n",stuarr[i].marks);
    }
}
