/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,y,r,k,f,s=0;
printf("Enter a number:");
scanf("%d",&n);
y=n;
while(n>0)
{ f=1;
  r=n%10;
  n=n/10;
  for(k=1;k<=r;k++)
  { f=f*k;}
  s=s+f;
}
if(y==s)
 printf("It is a strong number ");
else
 printf("It is not a strong number ");
  


}
