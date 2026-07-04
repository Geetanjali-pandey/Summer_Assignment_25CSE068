#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{int i,n1,n2;
srand(time(NULL));
n1=rand()%100+1;
printf("Guess the number from 1 to 100 in three chances\n");
for(i=1;i<=3;i++)
{ printf("Chance %d:",i);
  scanf("%d",&n2);
     if(n1==n2)
       { printf("Correct guess");
        break;
       }
     else
        { if(n1<n2)
              printf("your guess is higher than the number.\n");
          else
            printf("your guess is lower than the number.\n");
        }
}
if(i==4)
     printf("You lost\n Correct number:%d",n1);

    return 0;
}
