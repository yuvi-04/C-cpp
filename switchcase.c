int main()
{
    int dayno;
    printf("enter dayno");
    scanf("%d",&dayno);
    switch (dayno)
    {
        case 0: printf("sunday"); break;
        case 1: printf("monday"); break;
        case 2: printf("tuesday"); break;
        case 3: printf("wednesday"); break;
        case 4: printf("thursday"); break;
        case 5: printf("friday"); break;
        case 6: printf("saturday"); break;
        default: printf("error"); break;
    }
}
