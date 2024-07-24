#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i;

    gets(c);


    for(i=0;i<50;i++)
    {

        if(i==0)
        {
            c[i]=c[i]-32;
        }


        if(c[i]==' ')
        {
            c[i+1]=c[i+1]-32;
        }

    }
    puts(c);
}
