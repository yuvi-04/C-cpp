int main()
{
    int x=3;
    char ch;

   while(1)
    {
        scanf("%c",&ch);
        if(ch == '\n')
            break;
        scanf("%d",&x);
        printf("%c\n%d\n",ch,x);
    }

}
