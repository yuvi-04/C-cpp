void faxencrypt(char a[])
{
    int i,count=1,len=strlen(a);
    for(i=1; i<=len; i++)
    {
        if(a[i-1]==a[i])
        {
            count++;
        }
        if(a[i-1]!=a[i])
        {
            printf("%c%d",a[i-1],count);
            count=1;
        }
    }
}
int main()
{
    char str[]="aaaabcccbbbddddffff";
    faxencrypt(str);
}
