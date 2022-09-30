#include<stdlib.h>

int* positionofchar(char str[],char ch)
{
    int count=0,*p,pos=0,i;
    for(i=0; str[i]!=0; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("found number - %d", count);
    p=(int*)malloc((count+1)*sizeof(int));
    p[0]=count;
    pos=1;
    for(i=0; str[i]!=0; i++)
    {
        if(ch==str[i])
        {
            p[pos]=i;
            pos++;
        }
    }
    return p;
}
int main()
{
    char str[]="how are you dear. You are out. ";
    char ch='o';
    int *p=positionofchar(str,ch);
    int i;
    for(i=1; i<= p[0]; i++)
    {
        printf("%d ",p[i]);
    }
    //nwo clear the allocated memory
    free(p);
}
