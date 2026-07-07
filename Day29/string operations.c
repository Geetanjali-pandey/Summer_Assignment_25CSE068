#include <stdio.h>
#include <string.h>

int main()
{int len,ch,i,temp;
char str[50];
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
printf("Enter choice:");
printf("1.Length\n2. Uppercase\n3. Lowercase\n4. Reverse\n");
scanf("%d",&ch);
switch(ch)
{   case 1:
        printf("%d",strlen(str)-1);
        break;
    case 2:
        for(i=0;str[i]!='\0';i++)
            {if(str[i]>='a'&&str[i]<='z')
                str[i]=str[i]-32;
            }
            printf("%s",str);
            break;
    case 3:
        for(i=0;str[i]!='\0';i++)
            {if(str[i]>='A' && str[i]<='Z')
                str[i]=str[i]+32;
            }
            printf("%s",str);
            break;
    case 4:
            len=strlen(str);
            for(i=0;i<len/2;i++)
            {temp=str[i];
            str[i]=str[len-1-i];
            str[len-1-i]=temp;
            }
            printf("%s",str);
            break;
            
    default:
        printf("Invalid choice");
      
}

    return 0;
}
