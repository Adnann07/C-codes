
#include<stdio.h>
#include<string.h>

int main()
{
    char a[81],b[81];

    char y[81],z[81];

    gets(a);
    gets(b);

    int i,j,l=0,m=0;

    for(i=0 ; i<strlen(a) ; i++)
    {
        for( j = 0 ; j < strlen(b) ; j++)
        {
            if(a[i] == b[j])
                break;
        }
        if(j==strlen(b))
        {
            y[l]=a[i];
            l++;
        }
    }

    y[l] = 0;
    puts(y);

    for(i=0 ; i<strlen(b) ; i++)
    {
        for( j = 0 ; j < strlen(a) ; j++)
        {
            if(b[i] == a[j])
                break;
        }
        if(j==strlen(a))
        {
            z[m]=b[i];
            m++;
        }
    }

    z[m] = 0;
    puts(z);
}
