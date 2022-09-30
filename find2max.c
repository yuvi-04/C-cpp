int main()
{
    int a[]={3,6,2,7,9,4,1};
    int max1,max2,i;
    max1=max2=-25000;
    for(i=0; i<7; i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    printf("%d \n",max1);
    printf("%d ",max2);
}
