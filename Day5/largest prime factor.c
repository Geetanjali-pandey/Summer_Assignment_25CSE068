/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,n,f,k,max=0;
printf("Enter a number:");
scanf("%d",&n);
printf("Factors are:");
for(i=1;i<=n;i++)
{ 
  if(n%i==0)
  f=0;
    { for(k=1;k<=i;k++)
        {if(i%k==0)
           f++;
        }
    if (f==2)
    {if (i>max)
        max=i;
    }
}}
printf("Largest prime factor is %d",max);
    return 0;
}