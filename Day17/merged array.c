/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n1,ar[100],n2,br[100],cr[100];
printf("Enter number of elements for array1:");
scanf("%d",&n1);
printf("Enter elements of array 2:");
for(i=0;i<n1;i++)
{ scanf("%d",&ar[i]);
}
printf("Enter number of elements for array2:");
scanf("%d",&n2);
printf("Enter elements of array 2:");
for(i=0;i<n2;i++)
{ scanf("%d",&br[i]);
}
for(i=0;i<n1;i++)
{ cr[i]=ar[i];
}
for(i=0;i<n2;i++)
{ cr[n1+i]=br[i];
}
printf("Merged array:");
for(i=0;i<(n1+n2);i++)
{printf("%d\n",cr[i]);
}
    return 0;
}
