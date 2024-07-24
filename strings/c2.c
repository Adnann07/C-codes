
#include<stdio.h>
#include<string.h>

int main()
{
    int i;

    char c[50];
    gets(c);

    for(i=0;i<50;i++)
    {
        if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]+32;
        }

        else if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-32;
        }
    }
    puts(c);




}
