void addnumbers(char* n1,char* n2,char* n3)
{
    int x,i,j,k=0,y=0,z,a,b,count=0,len1=strlen(n1),len2=strlen(n2),difflen=len1-len2;
    for(i=len1-1,j=len2-1; 1; i--,j--)
    {
        a=n1[i]-'0';
        printf ("from a %d  " , a);
        if(j>=0)
        {
            b=n2[j]-'0';
        }
        else
        {
            b=0;
            count++;
        }
        printf ("from b %d  " , b);

        z=a+b+y;

        x=(z%10);
        y=z/10;

        n3[k]=x+'0';
        printf(" in ans %c \n", n3[k]);
        k++;
        if(count==difflen)
        {
            break;
        }
    }
    n3[k]=0;
}
int main()
{
    char n1[]="123406";
    char n2[]="9299";
    char n3[7];
    addnumbers(n1,n2,n3);
    printf(n3);
}
