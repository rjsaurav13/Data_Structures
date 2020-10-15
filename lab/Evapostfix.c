#include<stdio.h>     
#include<conio.h>     
#include<string.h>       
#define MAX 50              
int stack[MAX];             
char post[MAX];             
int top=-1;                 
void pushstack(int tmp);       
void evaluate(char c);          
void main()
{
   int i,l;
   //clrscr();
   printf("ENTER POSTFIX NOTATION: ");
   gets(post);                    
   l=strlen(post);               
   for(i=0;i<l;i++)
   {
      if(post[i]>='0' && post[i]<='9')
      {
          pushstack(i);            
      }
      if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
      post[i]=='/' || post[i]=='^')       
      {
          evaluate(post[i]);             
      }
   }                      
   printf("\nEVALUATION OF POSTFIX NOTATION: %d",stack[top]);
   getch();
}

void pushstack(int tmp)          
{
   top++;                             
   stack[top]=(int)(post[tmp]-48);   
}

void evaluate(char c)       
{
   int a,b,ans;        
   a=stack[top];       
   stack[top]='\0';     
   top--;                
   b=stack[top];         
   stack[top]='\0';      
   top--;                
   switch(c)     
   {
      case '+':         
          ans=b+a;
          break;
      case '-':           
          ans=b-a;
          break;
      case '*':            
          ans=b*a;
          break;
      case '/':           
          ans=b/a;
          break;
      case '^':      
          ans=b^a;
          break;
      default:
          ans=0;       
   }
   top++;         
   stack[top]=ans;        
}