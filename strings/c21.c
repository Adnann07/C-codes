#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[50];
    int x;

    printf("enter string for decryption: \n");
    gets(c);
    printf("decrypting . . . .");
    for(i=0;i<strlen(c);i++)
    {
        c[i]=c[i]+13;
    }
    printf("decryped: ");
    puts(c);

    printf("press 1 and enter to encrypt: ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("encrypting . . . .");
    for(i=0;i<strlen(c);i++)
    {
        c[i]=c[i]-13;
    }
    printf("encrypted: ");
    puts(c);
    }
}
