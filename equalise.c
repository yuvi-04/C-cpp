#define LEN 50
#define SIZE 50
void equalise(char num[LEN][SIZE],int n)
{
    int i,j,len[n],count=0,maxlen,x,diff;
    for(i=0; i<n; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("%c ",num[i][j]);
            if(num[i][j]=='.')
            {
                break;
            }
            count++;
        }
        len[i]=count;
        printf("count=%d\n",count);
        count=0;
    }
    maxlen=maxintegersbeforepoint(len,n);
    printf("maxlen=%d\n",maxlen);
    for(i=0; i<n; i++)
    {
        diff=maxlen-len[i];
        x=strlen(num[i]);
        printf("diff=%d x=%d\n",diff,x);
        for(j=x-1; j>=0; j--)
        {
            num[i][j+diff]=num[i][j];
        }
        for(j=0; j<diff; j++)
        {
            num[i][j]=0;
        }
    }
}
int maxintegersbeforepoint(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int i;
    char nums[LEN][SIZE]={"735.64","30492758.4348","1.63276","82.493"};
    equalise(nums,4);
    for(i=0; i<4; i++)
    {
        printf(nums[i]);
    }
}
