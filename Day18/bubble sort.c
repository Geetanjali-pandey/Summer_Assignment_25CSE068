/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,ar[100],n,j,temp;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1-i;j++)
   { if(ar[j]>ar[j+1])
       {temp=ar[j];
       ar[j]=ar[j+1];
       ar[j+1]=temp;
       }
   }
}
printf("sorted array:");
for(i=0;i<n;i++)
    printf("%d\n",ar[i]);
     
    return 0;
}
