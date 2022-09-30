void intstring(int a,char str[])
{
    int x,i,rem;
    for(i=0; i>-1; i++)
    {
        rem=a%10;
        x=rem+'0';
        str[i]=x;
        a=a/10;
        if(a==0)
            break;
    }
    reversestring(str);
}
void reversestring(char a[])
{
    int i,j,len=strlen(a);
    char t;
    for(i=0,j=len-1; i<len/2; i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int i;
    char str[20];
    printf("enter i");
    scanf("%d",&i);
    intstring(i,str);
    printf(str);
}
