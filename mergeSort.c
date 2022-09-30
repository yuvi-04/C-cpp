void merge(int a[], int st1, int end1, int b[], int st2, int end2,int c[], int k)
{
    int i = st1;
    int j = st2;
    for(; i<end1; i++)
    {
        for(; j<end2; j++)
        {
            if(b[j]<a[i])
            {
                c[k] = b[j];
                k++;
            }
            else
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
        if(j == end2)
        {
            for(; i<end1; i++)
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    if(i == end1)
    {
        for(; j<end2; j++)
        {
            c[k] = b[j];
            k++;
        }
    }
}

void mergeSort(int a[], int low, int high)
{
    int temp[20];
    int mid = (low+high)/2;
    if(low>high || low == high-1)
    {
        return;
    }
    mergeSort(a,low,mid);
    mergeSort(a,mid,high);
    merge(a,low,mid,a,mid,high,temp,low);

    for(int i=low; i<high; i++)
    {
        a[i] = temp[i];
    }
}

int main()
{
    int a[] = {25,12,35,78,21,5,36,98,4,15,32};
    int st = 0;
    int end = 11;

    mergeSort(a,st,end);

    for(int i=0; i<st+end; i++)
    {
        printf("%d ",a[i]);
    }
}
