/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumd(int n)
{ if(n==0)
     return 0;
  else 
    return ((n%10)+sumd(n/10));}

int main()
{int n;
printf("Enter a number:");
scanf("%d",&n);
printf("Sum of digits=%d",sumd(n));

return 0;
}
