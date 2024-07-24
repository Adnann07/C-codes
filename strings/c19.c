#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[50];
    gets(c);

    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==' ')
        {
            c[i]='-';
        }

         if(c[i]=='\t')
        {
            c[i]='#';
        }

         if(c[i]>='0' && c[i]<='9')
        {
            c[i]='/';
        }
    }
    puts(c);
}
