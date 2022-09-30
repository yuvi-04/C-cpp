int findmax(char a[][30],int n)
{
    int max,i,count=0;
    max=strlen(a[0]);
    for(i=1; i<n; i++)
    {
        if(strlen(a[i])>max)
        {
            max=strlen(a[i]);
            count=i;
        }
    }
    return count;
}
void swapstring(char a[][30], int i, int j)
{
    char t[30];
    strcpy(t,a[i]);
    strcpy(a[i],a[j]);
    strcpy(a[j],t);
}

void selectionsort(char a[][30],int n)
{
    int position,i;
    for(i=n; i>=1; i--)
    {
        position=findmax(a,i);
        swapstring(a,position,i-1);
    }
}
int main()
{
    char a[5][30]={"hello","sargam","java","bye"};
    int i,j;
    i=findmax(a,4);
    printf("%d \n",i);
    selectionsort(a,4);
    for(j=0; j<4; j++)
    {
        printf("%s ",a[j]);
    }
}
