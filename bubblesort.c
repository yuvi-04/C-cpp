void bubbleSortP(int a[], int st, int end)
{
    int i,temp;
    for(i=st; i<end; i++)
    {
        if(a[i] > a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
}

void bubbleSort(int a[], int st, int end)
{
    int i;
    for(i=end; i>st; i--)
    {
        bubbleSortP(a,st,i);
    }
}

int main()
{
    int a[8] = {3,1,20,6,9,81,14,7};
    int st = 0;
    int end = 8;
    bubbleSort(a,st,end);
    for(int i=0; i<end; i++)
    {
        printf("%d ",a[i]);
    }
}
