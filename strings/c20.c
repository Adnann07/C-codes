#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[50];

    gets(c);

    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='0' && c[i]<='9')
        {
            c[i]='#';
        }
        else if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-32;
        }
        else  if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]+32;
        }

       else if(c[i]!=' ')
                {
                    c[i]='%';
                }
    }
    puts(c);
}
