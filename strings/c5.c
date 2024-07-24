#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    int i;
    gets(c);

    int c1=0,c2=0,c3=0;
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            c1++;
        }
        else if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z'))
        {
            c2++;
        }
        else if(c[i]!=' ')
        {
            c3++;
        }


    }
    printf("%d vowels\n",c1);
    printf("%d consonants\n",c2);
    printf("%d special characters\n",c3);
}
