#include<stdio.h>
#include<stdlib.h>
# define n 11
#define c1 0
#define c2 2
int ht[n];
void display()
{
    int i;
    for(i = 0; i < n; i++)
      printf("ht[%d] = %d\n",i,ht[i]);
}
void insert()
{   
    int value,i;
    printf("Enter the value:");
    scanf("%d",&value);
    int key = (value*0.657)/11;
    if(ht[key]==-1)
       ht[key]=value;
    else
    {
    	for(i=0;i<n;i++)
        {
          printf("Collision Occurs:");
    	  key=(value%n +c1*i +c2*i*i)%n;
    	  if(ht[key] == -1)
          {     
            ht[key] = value;
           break;
          }
	    }
	}
}
int main() {
  int i, option;
   
  for (i = 0; i < n; i++)
    ht[i] = -1;
  while(1)
  {
    printf("\n 1.Insert");
    printf("\n 2.Display");
    printf("\n 3.Exit");
    printf("\n Enter your option.");
    scanf("%d", & option);
    switch (option) {
    case 1:
      insert();
      break;
    case 2:
      display();
      break;
    case 3:
    	exit(0);
    }
  }
  return 0;
}

