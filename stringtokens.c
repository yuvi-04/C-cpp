#include<stdio.h>
void printstrtokens(char a[])
{
    int i,count=0;
    int length=strlen(a);
    while(a[i]==' ' && a[i]!=0)
        i++;
    for(; i<length; i++)
    {
        if(a[i]==' ')
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
    char a[]="  this   is a big    string";
    printstrtokens(a);
}
