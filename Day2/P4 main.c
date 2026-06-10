/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int i,n,r,s,y=0;
printf("Enter a number:");
scanf("%d",&n);
s=n;
while(n>0)
{
 r=n%10;
 y=y*10+r;
 n=n/10;
}
if (s==y)
{ printf("Given number is palindrome ");}
else
{printf("Given number is not palindrome ");}


    return 0;
}
