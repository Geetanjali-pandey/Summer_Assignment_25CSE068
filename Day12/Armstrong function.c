/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
void armstrong(int n,int p)
{int i,r,y,s=0;
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
}
int main()
{int n,p;
printf("Enter a number:");
scanf("%d",&n);
printf("Enter number of digits:");
scanf("%d",&p);
armstrong(n,p);

    return 0;
}
