int strcmpi1(const char a[],const char b[])
{
    int i;
    char x,y;
    for(i=0; i<strlen(a); i++)
    {
        x=a[i];
        y=b[i];
        if(x>='A' && x<='Z')
        {
            x=x+32;
        }
        if(y>='A' && y<='Z')
        {
            y=y+32;
        }
        if(x==y)
        {

        }
        else
            return x-y;
    }
    return 0;
}
int main()
{
    int x;
    char a[]="ORANGE";
    char b[]="APPLE";
    x=strcmpi1(a,b);
    printf("%d ",x);
}
