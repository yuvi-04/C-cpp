int findMaxPos(int a[], int n)
{
    int i,pos,max;
    max = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    return pos;
}

void shiftMaxToLast(int a[], int n)
{
    int pos,temp;
    pos = findMaxPos(a,n);
    temp = a[pos];
    a[pos] = a[n-1];
    a[n-1] = temp;
}

void reverseMaxShift(int a[], int n)
{
    int i;
    for(i=n; i>0; i--)
    {
        shiftMaxToLast(a,i);
    }
}

int main()
{
    int a[] = {12,25,8,9,5,11,3,22,15};
    int i;
    int n = 9;
    reverseMaxShift(a,n);
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
