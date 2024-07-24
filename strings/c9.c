#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    char x[40];
    char *p;
    printf("enter string: ");
    gets(c);
    printf("enter subsstring: ");
    gets(x);

    p=strstr(c,x);
    if(p)
    {
        printf("%s is found inside of %s",x,c);

    }
    else
    {
        printf("could not find it");
    }
}
