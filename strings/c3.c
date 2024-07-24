#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char c[50];
    int c1=0,c2=0;
    gets(c);


    for(i=0; i<50; i++)
        if(c[i]!=' ')
        {
            {
                if(c[i]>='1' && c[i]<='9')
                {
                    c1++;
                }

                else if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z')
                {
                    c2++;
                }

            }
        }

    printf("number of words %d num of numbers %d",c2,c1);
}
