#include<stdio.h>
#include<string.h>
struct student 
{
    char name[20];
    float phy,che,math;
    float sum;
}stu[100],temp;


void enterData(int n)
{   
    for(int i=1 ;i<=n ; i++)
    {   
        
        printf("\n\nEnter the Details of %d student .\n",i);
        printf("Name  :  ");
        scanf("%s",&stu[i].name);

        printf("\nEnter the marks of phy , che , maths :  ");
        scanf("%f%f%f",&stu[i].phy,&stu[i].che,&stu[i].math);
        stu[i].sum= stu[i].phy+ stu[i].che+ stu[i].math;
        
    }
   
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n ; j++)
        {
           if(stu[i].sum > stu[j].sum)
              {
              temp=stu[i];
              stu[i]=stu[j];
              stu[j]=temp;
              }
             
        }
    }
    printf("\n\n------------------RESULT-------------------");

    for(int i=1;i<=n;i++)
    {
        printf("\n\n%s  --------> %f",stu[i].name,stu[i].sum);

    }

}

int main()
{
  int num;
  printf("Enter the number of student data you want to enter : ");
  scanf("%d",&num);

  enterData(num);
  
}
