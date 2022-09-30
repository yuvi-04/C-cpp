#define MAX 25
void addlast(int a[],int n,int x,int max)
{
    max=MAX;
    if(n<max && n>-1)
    {
        a[n]=x;
    }
    else
        printf("cannot insert");
}
void addposition(int a[],int n,int pos,int x,int max)
{
    max=MAX;
    if(n<max && n>-1)
    {
        a[pos-1]=x;
    }
    else
        printf("cannot add");
}
void removefirst(int a[],int n,int max)
{
    int i;
    max=MAX;
    if(n<max)
    {
        for(i=0; i<n; i++)
        {
            a[i]=a[i+1];
        }
    }
}
void removeposition(int a[],int n,int position,int max)
{
    int i;
    max=MAX;
    for(i=position; i<n; i++)
    {
        a[position-1]=a[position];
    }
}
void printar(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[MAX];
    int max=MAX;
    addlast(a,0,5,max);
    addlast(a,1,7,max);
    addlast(a,2,10,max);
    addlast(a,3,25,max);
    addlast(a,4,2,max);
    addlast(a,5,6,max);
    addlast(a,6,15,max);
    addlast(a,7,65,max);
    addlast(a,8,35,max);
    addposition(a,4,10,85,max);
    printar(a,10);
    printf("\n");
    removefirst(a,10,max);
    printar(a,9);
    printf("\n");
    removeposition(a,9,3,max);
    printar(a,8);
}
