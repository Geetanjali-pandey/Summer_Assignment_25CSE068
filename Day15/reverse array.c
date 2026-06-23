/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],br[100],j=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
for(i=n-1;i>=0;i--)
{  br[j]=ar[i];
j++;
}
printf("Reverse array:");
for(i=0;i<n;i++)
{ printf("%d\n",br[i]);
}

    return 0;
}
