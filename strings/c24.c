#include<stdio.h>
#include<string.h>
int main()
{
    char c[5][50];
    int i;

    printf("enter string: ");

    for(i=0;i<5;i++)
    {
        gets(c[i]);
    }


    for(i=0;i<5;i++)
    {
        puts(c[i]);



    }

    for(i=0;i<5;i++)
    {
            printf("length is:%d\n",strlen(c[i]));



    }







}
