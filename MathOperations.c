#include<stdio.h>
#include<conio.h>
int res;
int sum(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int main()
{
 int choice, a,b;
 printf("Select any one of the following operation \n");
 printf("1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n");
 scanf("%d",&choice);
 printf("Please enter two values");
 scanf("%d%d",&a,&b);
  if(choice==1)
   printf("sum is %d\n",sum(a,b));
  else if(choice==2)
  printf("sub is %d\n",sub(a,b));
  else if(choice==3)
  printf("mul is %d\n",mul(a,b));
  else if(choice==4)
  printf("div is %d\n",div(a,b));
  else
  printf("not a valid choice");
  getch();
 }
 int sum(int x,int y)
  {
    res=a+b;
    return res;
}
