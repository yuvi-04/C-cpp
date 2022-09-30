int countsteps(int a[][8])
{
    int x=0,y=0,i,j,k,l,m,n,count=0,loopout;
    for(i=0,j=0,loopout=0; loopout<64; loopout++)
    {
        if((j+1)<8)
            k=a[i][j+1];
        else
            k=0;
        if((i+1)<8)
            l=a[i+1][j];
        else
            l=0;
        if((j-1)>=0)
            m=a[i][j-1];
        else
            m=0;
        if((i-1)>=0)
            n=a[i-1][j];
        else
            n=0;
        if(k==1)
        {
            if(i==x&&j+1==y)
            {

            }
            else
            {
                x=i;
                y=j;
                j=j+1;
                count++;
                printf("x=%d y=%d\ncount=%d\n",x,y,count);
                continue;
            }
        }
        if(l==1)
        {
            if(i+1==x&&j==y)
            {

            }
            else
            {
                x=i;
                y=j;
                i=i+1;
                count++;
                printf("x=%d y=%d\ncount=%d\n",x,y,count);
                continue;
            }
        }
        if(m==1)
        {
            if(i==x&&j-1==y)
            {

            }
            else
            {
                x=i;
                y=j;
                j=j-1;
                count++;
                printf("x=%d y=%d\ncount=%d\n",x,y,count);
                continue;
            }
        }
        if(n==1)
        {
            if(i-1==x&&j==y)
            {

            }
            else
            {
                x=i;
                y=j;
                i=i-1;
                count++;
                printf("x=%d y=%d\ncount=%d\n",x,y,count);
                continue;
            }
        }
        if(i==7&&j==7)
        {
            printf("x=%d y=%d\ncount=%d\n",i,j,count);
            break;
        }

    }
    return count;
}
int main()
{
    int a[8][8]={1,1,0,0,1,1,1,0,
                 0,1,1,0,1,0,1,0,
                 0,0,1,0,1,0,1,0,
                 0,0,1,1,1,0,1,0,
                 0,0,0,0,0,0,1,0,
                 0,0,0,0,0,0,1,1,
                 0,0,0,0,0,0,0,1,
                 1,0,1,0,0,0,0,1};
    int x;
    x=countsteps(a);
    printf("%d ",x);
}
