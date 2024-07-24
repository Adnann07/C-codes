#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[50];
    int c1=0,c2=0;
    gets(c);

    for(i=0;i<strlen(c);i++)
    {

        if(c[i]>='a' && c[i]<='z')
        {
            c1++;
        }
        else if(c[i]>='A' && c[i]<='Z')
        {
            c2++;
        }


    }
    printf("small letters %d and capital letters %d",c1,c2);
}
