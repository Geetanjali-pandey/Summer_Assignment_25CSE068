/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
printf("Elements are:");
for(i=0;i<n;i++)
{ printf("%d\n",ar[i]);
}

    return 0;
}
