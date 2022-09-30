void removeAllExtraSpaces(char a[], char b[])
{
    int i=0,j=0,count=0;
    while(a[i] ==' ' && a[i] != 0)
        i++;
    for(; i<=strlen(a); i++)
    {
        if(a[i]==' ')
        {
            count++;
            if(count>1)
            {

            }
            else
            {
                b[j]=' ';
                j++;
            }
        }
        else
        {
            b[j]=a[i];
            count=0;
            j++;
        }
    }
}
int main()
{
    char a[] = "  hello I   am  yuvi ";
    char b[strlen(a)];
    removeAllExtraSpaces(a,b);
    printf(b); printf("done");
}
