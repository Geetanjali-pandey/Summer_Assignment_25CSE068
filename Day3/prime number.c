/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,f=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ if(n%i==0)
  {f=f+1;}
}
if (f==2)
 {
     printf("It is prime number");
 }
else 
 {
     printf("It is not prime number");
 }
    return 0;
}
