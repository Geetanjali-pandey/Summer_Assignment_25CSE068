/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],odd=0,even=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{ if(ar[i]%2==0)
      even=even+1;
  else
      odd=odd+1;
}
printf("Number of odd elements=%d\n",odd);
printf("Number of even elements=%d",even);

    return 0;
}
