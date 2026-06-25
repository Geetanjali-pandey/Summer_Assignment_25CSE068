/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n1,ar[100],n2,br[100],cr[100],k=0,j,f;
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
cr[k++]=ar[i];
for(i=0;i<n2;i++)
{f=0;
for(j=0;j<k;j++)
   {if(br[i]==cr[j])
       {f=1;
        break;}
    }
if(f==0)
    cr[k++]=br[i];
}
printf("Union array: ");
for(i=0;i<k;i++)
    printf("%d ",cr[i]);

   return 0;
}