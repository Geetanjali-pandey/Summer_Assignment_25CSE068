/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{int i,p,n,r,y,s=0;
printf("Enter a number:");
scanf("%d",&n);
printf("Enter number of digits:");
scanf("%d",&p);
y=n;
while(n>0)
{r=n%10;
n=n/10;
s=s+pow(r,p);
}
if(y==s)
 printf("It is an armstrong number");
else 
 printf("It is not an armstrong number");
 return 0;
}