/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],max,smax;

printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
max=smax=ar[0];
for(i=0;i<n;i++)
{ if(ar[i]>max)
    {  smax=max;
      max=ar[i];
    }
        else if(ar[i]>smax&& ar[i]!=max)
           smax= ar[i];
        
}
printf("Second largest element=%d",smax);
    return 0;
}
