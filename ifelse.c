int main()
{
    int x,y;
    printf("enter x and y");
    scanf("%d%d",&x, &y);

    if(x > 5) //conditional statement
    {
            printf("big ");
            if(y < 10)
                printf("\n y small go\n");
            else printf("y big ");
    }
    else
        printf("small");


}
