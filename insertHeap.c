void insertHeap(int a[], int n, int x)
{
    a[n+1] = x;
    int s = n+1, f = s/2;
    while(1)
    {
        if(a[s]>a[f])
        {
            int temp = a[s];
            a[s] = a[f];
            a[f] = temp;
        }
        else
            break;
        s = f;
        f = s/2;
        if(s == 1)
            break;
    }
}

void swap(int a[], int pos1, int pos2)
{
    int temp;
    temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = temp;
}

void arrangeRoot(int a[], int n)
{
    int f = 1;
    int s = 2;
    if(n >= 3 && a[3] > a[2])
    {
        s = 3;
    }
    while(s <= n)
    {
        if(a[s] > a[f])
        {
            swap(a,s,f);
            f = s;
            s = 2*s;
            if(s+1 <= n && a[s+1] > a[s])
            {
                s = s+1;
            }
        }
        else
            break;
    }
}

int main()
{
    int a[20] = {0,10,80,72,40,37,12,36,18,26,25,12,90};
    int n = 11;
    arrangeRoot(a,n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
