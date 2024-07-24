#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i;
    char x;
    int c1=0;


    printf("enter your string: ");
    gets(c);
    printf("enter character you want to search: ");
    scanf("%c",&x);

    printf(". . . . finding character\n");

    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==x)
        {
            c1=1;
        }

    }
    if(c1!=0)
    {
        printf("character has been found");
    }
}
