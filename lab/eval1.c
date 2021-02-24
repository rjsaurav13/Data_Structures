#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
double s[100];  
int top=-1;
void push(double x) 
{
  s[++top]=x;
}

double pop()  
{
return s[top--];
}

double compute(double a,char sym,double b) 
{
 switch(sym)
{
 case '+':return a+b;
 case '-':return a-b;
 case '*':return a*b;
 case '/':if(b==0)
	  {
		printf("Divide by zero error..!");
		exit(0);
	  }
	  return a/b;
 case '^':
 case '$':return pow(a,b); 
 default:printf("Invalid operation\n");
	 exit(0);
}
}

void main()
{
 char pos[100],ch;
 int i;
 double res,op1,op2;
 printf("Enter postfix expression to be evaluated\n"); 
 scanf("%s",pos);
 for(i=0;pos[i];i++) 
 {
   ch=pos[i];
   if(isdigit(ch))
	push(ch-'0'); 
   else
   {
     op2=pop();
     op1=pop(); 
     res=compute(op1,ch,op2);
     push(res); 
   }
 }
 printf("Result = %lf\n",pop()); 
}
