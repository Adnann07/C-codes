
#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i;
    int c1=0;
    gets(c);


    for(i=0;i<50;i++)
        {
            if(c[i]!=0)
            c1++;

            else
                break;
        }

        printf("length: %d",c1);
}
