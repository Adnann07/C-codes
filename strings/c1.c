#include<stdio.h>
#include<string.h>

char check(char x,char *y)
{
    int i;

    for(i=0;i<strlen(y);i++)
    {
        if(strcmp(x,y[i])==0)
        {
            printf("occurs");
        }
    }
    printf("not occurs");
}
int main()
{
    char x[50],y[50];
    gets(x);
    gets(y);

    check(x[0],y);


}
