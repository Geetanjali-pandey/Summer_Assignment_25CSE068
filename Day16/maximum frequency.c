/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],c,j,cmax=0,max;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
max=ar[0];
for(i=0;i<n;i++)
{ c=0;
for(j=i;j<n;j++)
   { if(ar[i]==ar[j])
        c++;
   }
if(c>cmax)
{  cmax=c;
   max=ar[i];
}
}
printf("Maximum frequency element=%d with frequency %d",max,cmax);

    return 0;
}
