#include<stdio.h>
#include<conio.h>

struct student
{
  char name[50],usn[12];
  int sem;
  float cgpa;
};

void main()
{
  struct student s[10];
  int i,j;
  float t;
  for(i=0;i<10;i++)
  {
    printf("\n Enter details of Student- %d\n",i+1);
    printf("Enter name: ");
    fflush(stdin);
    gets(s[i].name);
    printf("Enter usn: ");
    gets(s[i].usn);
    printf("Enter your Semester ");
    scanf("%d",&s[i].sem);
  	printf("Enter your cgpa ");
    scanf("%f",&s[i].cgpa);
  }
  printf("Records of the 10 students");
  for(i=0;i<10;i++)
  {
    printf("\nStudent %d",i+1);
    printf("\nName: %s",s[i].name);
    printf("\nusn: %s",s[i].usn);
    printf("\nSEM: %d",s[i].sem);
    printf("\nCGPA: %f",s[i].cgpa);
    printf("\n");
  }
   for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(s[j].cgpa<s[j+1].cgpa)
            {
                t=s[j].cgpa;
                s[j].cgpa=s[j+1].cgpa;
                s[j+1].cgpa=t;
            }
        }
    }
    
	    
    for(i=0;i<10;i++)
    {
        printf("%s\t\t\t%s\t\t\t%fd\n",s[i].name,s[i].usn,s[i].cgpa);
    }
  
}

