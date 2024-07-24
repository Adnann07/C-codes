#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    char x[50];
    int i;

    gets(c);
    gets(x);

    strcat(c, x);
    puts(c);
}
