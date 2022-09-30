int HCF(int a,int b)
{
    int r,i;
    while(b%a!=0)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return a;
}
int LCM(int a,int b)
{
    int x=HCF(a,b);
    int y=a/x*b;
}
int main()
{
    int a=56;
    int b=108;
    int x=HCF(a,b);
    int y=LCM(a,b);
    printf("%d \n",x);
    printf("%d",y);
}
