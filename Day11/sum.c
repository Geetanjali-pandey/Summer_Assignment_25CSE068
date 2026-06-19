/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum(int a,int b)
{ int c;
  c=a+b;
  return c;}

int main()
{int a,b,s;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("Sum:%d",s);

    return 0;
}
