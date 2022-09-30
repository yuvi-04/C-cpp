int main()
{
    int n=10;
    int i,found ;
    for(n=10; n<=100; n++)
    {
        found=0;
        for(i=2; i<n && found==0; i++)
        {
            if(n%i==0)
            {
                found=1;
               break;
            }
        }
        if(found==0)
            printf(" %d ",n);
    }

}
