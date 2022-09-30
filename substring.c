void substring(char big[],char small[],int from,int to)
{
    char t[30];
    int i;
    for(i=0; i>-1; i++)
    {
        t[i]=small[i];
        small[i]=big[from];
        from++;
        if(from==to)
        {
            return;
        }
    }
}
int main()
{
    char big[]="this is a big string";
    char small[]="small string";
    substring(big,small,3,10);
    printf("%s ",small);
}
