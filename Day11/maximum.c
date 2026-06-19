/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int maximum(int a,int b,int c)
{ int max=a;
if (b>=max)
   max=b;
if (c>=max)
   max=c;
return max;}
int main()
{ int x,y,z,m;
printf("Enter three numbers:");
scanf("%d%d%d",&x,&y,&z);
m=maximum(x,y,z);
printf("Maximum number:%d",m);

    return 0;
}
