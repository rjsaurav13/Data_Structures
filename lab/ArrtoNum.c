#include<stdio.h>
#include <math.h>
int main(){
int m,n,t,r;
scanf("%d%d",&m,&n);
t=m;
  while(t!=0)
    {
        if(m%t==0)
        {
            if(n%t==0)
            {
                r=t;
                printf("gcd is %d",r);
                exit(0);

            }
        }
    }
t=t-1;
return 0;
}
