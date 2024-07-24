#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i,c1=0;
    char x;
    printf("enter your string: \n");
    gets(c);
    printf("enter the char you want to search: ");


    scanf("%c",&x);

    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==x)
        {
            c1++;
        }
    }
    if(c1!=0)
    {
        printf("%c has been found %d times",x,c1);
    }
    else
    {
        printf("not found");
    }

}
