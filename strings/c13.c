int main()
{
    char a[50],b[50];

    gets(a);
    gets(b);

    int x = strlen(a),y=strlen(b);

    if(x>y)
        puts(a);
    else
        puts(b);
}
