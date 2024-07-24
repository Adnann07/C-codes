

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i;

    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='a' ||c[i]=='e' ||c[i]=='i' ||c[i]=='o' ||c[i]=='u')
        {
            c[i]=c[i]-32;
        }
    }
    puts(c);
}
