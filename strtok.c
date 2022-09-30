int isInArray(char * delim, char ch)
{
    int i = 0;
    while(delim[i] != '\0')
    {
        if(ch == delim[i] )
            return 1;
        i++;
    }
    return 0;

}
void strtok(char a[],char delim[])
{
    int i,count=0,length=strlen(a);
    while(isInArray(delim, a[i])  && a[i]!=0)
        i++;
    for(; i<length; i++)
    {
        if(isInArray(delim, a[i]) )
        {
            count++;
            if(count>1)
            {

            }
            else
                printf("\n");
        }
        else
        {
            printf("%c",a[i]);
            count=0;
        }
    }

}
int main()
{
    int i;
    char a[]="this is a big;string one-two-three;four ";
    char b[]=" ,-;";
    strtok(a,b);
}
