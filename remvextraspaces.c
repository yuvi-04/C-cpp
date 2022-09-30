void removeextraspaces(char a[],char b[])
{
    int i,len=strlen(a),count=0;
    int j=0;
    while(a[i]==' ' && a[i]!=0)
        i++;
    for(; i<=len; i++)
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
    int i;
    char a[]="   this    is    a  good     thing";
    char b[strlen(a)];
    removeextraspaces(a,b);
    printf(b);
}
