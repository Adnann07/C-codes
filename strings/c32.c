
#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],z=0;

    scanf("%[^\n]s",&a);

    for(int i=0;i<strlen(a)-1;i++)
    {
        if(a[i] == ' ' && a[i+1] == ' ')
        {
            for(int j=i+1 ; j<strlen(a)-1-z ; j++)
            {
                a[j]=a[j+1];
            }
            i--;
            z++;
        }
    }

    a[strlen(a)-z] = 0;
    puts(a);
}
