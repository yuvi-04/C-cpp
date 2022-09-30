void insertSorted(int a[],int n,int x)
{
    int i;
    for(i=n-1; i>=-1; i--)
    {
       if(a[i]>x)
       {
           a[i+1]=a[i];
       }
       else
       {
           a[i+1]=x;
           break;
       }
    }
}

void insertionSort(int a[], int n)
{
        int x;
        for(int i=1; i<n; i++)
        {
            x=a[i];
            insertSorted(a,i,x);
        }
}

int main()
{
    int a[20] = {12,15,11,10,25,9};
    int n = 6;
    insertionSort(a,n);
    for(int j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }
}

