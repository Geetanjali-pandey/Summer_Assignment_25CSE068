/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],br[100],j=0,c=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{ if(ar[i]!=0)
      {br[j]=ar[i];
      j++;}
  else
      c++;
}
while(c!=0)
   { br[j]=0;
    j++;
    c--;
   }
printf("array:");
for(i=0;i<n;i++)
{ printf("%d\n",br[i]);
}

    return 0;
}
