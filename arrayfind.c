int main()
{
    int a[10]={1,2,3,4,5,6,57,8,9,10};
    int x,position,i ;
    int found = 0;
    printf("enter x ");
    scanf("%d",&x);

    for(i=0; i<10; i++)
    {
        if(x==a[i])
        {
            position=i;
            printf("number found at %d ",position);
            found = 1;
            break; //break the loop and get out of loop
        }
    }
    if(found == 0)
        printf("number not found");

}
