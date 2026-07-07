#include <stdio.h>

int main()
{int ar[50],i,n,ch,max,min,sum=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array:");
for(i=0;i<n;i++)
   { scanf("%d",&ar[i]);
   }
printf("Enter choice:");
printf("1. Sum\n2. Maximum\n3. Minimum\n4.Display\n");
scanf("%d",&ch);
switch(ch)
{  case 1:
    for(i=0;i<n;i++)
        sum=sum+ ar[i];
    printf("sum=%d",sum);
    break;
   case 2:
    max=ar[0];
    for(i=0;i<n;i++)
       {if(max<ar[i])
           max=ar[i];
       }
    printf("Maximum number=%d",max);
    break;
   case 3:
    min=ar[0];
    for(i=0;i<n;i++)
       {if(min>ar[i])
           min=ar[i];
       }
    printf("Minimum number=%d",min);
    break;
   case 4:
    printf("Array:");
    for(i=0;i<n;i++) 
       printf("%d\n",ar[i]);
    break;
   default:
    printf("Invalid choice");
   
}

    return 0;
}
