#include <stdio.h>

int main()
{int pin,ch;
float balance=1000,amt;
printf("Enter pin:");
scanf("%d",&pin);
if(pin==1234)
    { printf("1.Check balance\n2.Deposit\n3.Withdraw\n");
      printf("Enter choice:");
      scanf ("%d",&ch);
      if(ch==1)
          printf("Balance=%f", balance);
      else if(ch==2)
        { printf("Enter amount:");
          scanf("%f",&amt);
          printf("Updated amount=%f", balance+amt);
        }
      else if(ch==3)
        { printf("Enter amount:");
          scanf("%f",&amt);
          if(balance>amt)
          printf("Updated amount=%f", balance-amt);
          
         else 
            printf("Insufficient balance ");
        }
    }
else
    printf("Invalid choice ");
        
         
         

}
