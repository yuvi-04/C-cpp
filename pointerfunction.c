int strlen1(char *a)
{
    int i,count=0;
    for(i=0; *(a+i)!='\0'; i++)
    {
        count=count+1;
    }
    return count;
}
void strcpy1(char *a, char *b)
{
    int i;
    for(i=0; 1 ; i++)
    {
        *(a+i)=*(b+i);
        if(*(a+i)=='\0')
        {
            break;
        }
    }
}
void concatstr1(char *d,char *s)
{
    int i,count=0;
    for(i=0; *(d+i)!=0; i++)
    {
        count=count+1;
    }
    *(d+count)=*s;
    for(i=1; i>0; i++)
    {
        *(d+count+i)=*(s+i);
        if(*(s+1)=='\0')
        {
            break;
        }
    }
}
/*int countchr1(char *str,char ch)
{
    int i,count=0;
    int *p=str;
    for(i=0; *(p+i)!=0; i++)
    {
        if(*(p+i)==ch)
        {
            count=count+1;
        }
    }
    return count;
}*/
int strstr(char *big,char *small)
{
    int i,j;
    char *p=big;
    char *q=small;
    for(i=0; *(p+i)!=0; i++)
    {
        if(*(p+i)==*q)
        {
            for(j=0; *(q+i)!=0; j++)
            {
                if(big[i+j]=*(q+j))
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
    strcpy1(a,b);
    printf("%s",a);
}
