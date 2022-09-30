void swapstr(char a[],char b[])
{
    int i;
    char t;
    int len = strlen(b);
    for(i=0; i<len; i++)
    {
        printf("\nswapping %c with %c",a[i], b[i]);
        t=a[i];
        a[i]=b[i];
        b[i]=t;
    }
}
int main()
{
    char a[30];
    strcpy(a,"yuvraj");
    char b[30];
    strcpy(b,"dineshkumar");
    swapstr(a,b);
    printf("\n%s \n",a );
    printf("%s ",b);
}
