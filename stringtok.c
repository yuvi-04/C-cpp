#include<string.h>
int main()
{
    char b[]="123 456 789 680 254";
    int i,a[10],x,len=strlen(b);
    char* temp;
    temp=strtok(b," ");
    for(i=0; i>-1; i++)
    {
        x=atoi(temp);
        a[i]=x;
        temp=strtok(NULL," ");
        if(temp==NULL)
        {
            break;
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}
