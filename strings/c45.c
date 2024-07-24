#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    FILE *fp1, *fp2;
    fp1= fopen("t1.txt","r");
    fp2= fopen("t2.txt","r");

    while((ch==fgets(fp1))!= EOF)
    {
        if(ch !=' ')
            fputc(ch2,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    remove("t1.txt");
    remove("t2.txt","t2.txt");

}
