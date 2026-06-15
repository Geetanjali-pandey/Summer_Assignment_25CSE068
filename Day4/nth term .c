/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n,c,i,a=0,b=1;
printf("Enter n:");
scanf("%d",&n);
if(n==1)
    printf("nth Fibonacci term = %d", a);
else if(n==2)
    printf("nth Fibonacci term = %d", b);
else{
for(i=3; i<=n;i++)
  {c=a + b;
   a= b;
   b= c;}
printf("nth Fibonacci term = %d", b);
    }

    return 0;
}