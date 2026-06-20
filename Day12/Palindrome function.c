/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void palindrome(int n)
{ int r,i,y,s=0;
y=n;
while(n>0)
{ r=n%10;
  s=s*10+r;
  n=n/10;
}
if(y==s)
   printf("It is a palindrome number");
else
   printf("It is not a palindrome number ");
    
}
int main()
{ int n;
printf("Enter a number:");
scanf("%d",&n);
palindrome(n);

    return 0;
}
