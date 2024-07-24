#include<stdio.h>
#include<string.h>

char check(char x,char *y)
{
    int i;
    for(i=0;i<strlen(y);i++)
    {
        if(x==y[i])
        {
            printf("occurs");
            return 0;
        }
    }
    printf("does not occur");
}



int main()
{
    char x[50];
    char y[50];
    gets(x);
    gets(y);

    check(x[0],y);
}
