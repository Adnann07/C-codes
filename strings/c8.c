#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];

    char x[40];
    char *p;
    printf("enter string: ");
    gets(c);
    printf("enter other string: ");
    gets(x);
    p=strstr(c,x);
    if(p)

    {
        printf("found!\n");
        printf("'%s'is found inside of '%s' and its position is %s",x,c,p);
    }
    else
    {
        printf("0");
    }
}
