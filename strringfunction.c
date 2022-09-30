int strlen1(char a[])
{
    int i,count=0;
    for(i=0; a[i]!='\0'; i++)
    {
        count=count+1;
    }
    return count;
}
void strcpy1(char a[], char b[])
{
    int i;
    for(i=0; i>-1; i++)
    {
        a[i]=b[i];
        if(b[i]=='\0')
        {
            break;
        }
    }
}
void concatstr1(char d[],char s[])
{
    int i,count=0;
    for(i=0; d[i]!=0; i++)
    {
        count=count+1;
    }
    d[count]=s[0];
    for(i=1; i>0; i++)
    {
        d[count+i]=s[i];
        if(s[i]=='\0')
        {
            break;
        }
    }
}
int countchr1(char str[],char ch)
{
    int i,count=0;
    for(i=0; str[i]!=0; i++)
    {
        if(str[i]==ch)
        {
            count=count+1;
        }
    }
    return count;
}
int strstr(char big[],char small[])
{
    int i,j;
    for(i=0; big[i]!=0; i++)
    {
        if(big[i]==small[0])
        {
            for(j=0; small[j]!=0; j++)
            {
                if(big[i+j]=small[j])
                {

                }
                else
                    break;
            }
            if(j==strlen1(small))
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    char a[]="yuvraj budhiraja";
    char b[]="saru";
    int len,x,y;
    len=strlen1(a);
    printf("%d \n",len);
    x=strstr(a,b);
    printf("%d \n",x);
    concatstr1(a,b);
    strcpy1(a,b);
    y=countchr1(a,'a');
    printf("%d \n",y);
}
