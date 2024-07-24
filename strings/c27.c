#include<stdio.h>
#include<string.h>
int main()
{
    int i,x;
    char c[50];
    gets(c);
    printf("all upper case: \n");
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-32;
        }
    }
    puts(c);
    printf("press 1 and enter for all lower case: ");
    scanf("%d",&x);
    if(x==1){
       printf("all lower case: \n");
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]+32;
        }
    }

    puts(c);
    }


    }
