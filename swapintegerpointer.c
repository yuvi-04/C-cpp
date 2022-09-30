void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    int x=7,y=10;
    swap(&x,&y);
    printf("%d, %d",x,y);
}
