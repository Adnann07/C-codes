#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],x[50];
    int i,j,m,n,p;
    printf("enter string: ");
    gets(c);
    printf("enter starting position: ");
    scanf("%d",&m);
    printf("enter number of digits to extract: ");
    scanf("%d",&n);


    for(i=0,j=m-1;i<n;i++,j++)
    {
        x[i]=c[j];
    }

    puts(x);


}
