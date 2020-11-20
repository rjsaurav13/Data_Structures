#include <stdio.h>
int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int j,sum=0;
    double mdouble;
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&j);
    scanf("%lf",&mdouble);
   char str[20];
   scanf("%[^\n]",str);
   scanf("%[^\n]", str);
    printf("%d\n",i+j);
    printf("%.1lf\n",d+mdouble);
   printf("%s%s",s, str);


   return 0;
}
