int compareto(char* n1,char* n2)
{
    int len1=strlen(n1),len2=strlen(n2),k;
    if(len1>len2)
    {
        return 1;
    }
    if(len2>len1)
        return -1;
    if(len1==len2)
    {
        for(k=0; k<len1; k++)
        {
            if(n1[k]>n2[k])
                return 1;
            if(n2[k]>n1[k])
                return -1;
            if(n1[k]==n2[k])
            {

            }
            if(k==len1-1)
                return 0;
        }
    }
}
void subtract(char* n1,char* n2,char* n3)
{
    int a,b,k=0,i,j,z,len1,len2;
    int neg = 0;
    if(compareto(n1,n2)<0)
    {
        char* temp=n1;
        n1=n2;
        n2=temp;
        n3[k] = '-';
        k++;
        neg = 1;
    }
    len1 = strlen(n1);
    len2 = strlen(n2);
    for(i=len1-1,j=len2-1; i>=0; i--,j--)
    {
        a=n1[i]-'0';
        b=n2[j]-'0';
        if(a<b)
        {
            a=a+10;
            n1[i-1]=n1[i-1]-1;
        }
        if(j<0)
        {
            b=0;
        }
        z=a-b;
        n3[k]=z+'0';
        k++;
    }
    n3[k]=0;
    if(neg ==1)
        strrev(n3+1);
    else strrev(n3);
}
int main()
{
    char n1[]="645785415";
    char n2[]="9022145875885";
    char n3[7000];
    subtract(n1,n2,n3);
    printf(n3);
}
