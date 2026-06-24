/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,j,n,ar[100],sum,f=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
printf("Enter sum:");
scanf("%d",&sum);
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
      { if( ar[i]+ar[j]==sum)
          {printf("found %d+%d=%d\n",ar[i],ar[j],sum);
           f=1;
           break;
          }
      }
}
if(f==0)
    printf("Not found");

           
    return 0;
}