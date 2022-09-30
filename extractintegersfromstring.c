int main()
{
    char a[]="hello yuvraj i am 43 and you are 17 the gap of 26 years will always be there";
    int i;
    int len=strlen(a),x;
    int found=0;
    for(i=0; i<len; i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            found++;
            if(found==2)
            {
                found=0;
            }
            else
            {
                x=a[i]-'0';
                x=x*10;
                x=(a[i+1]-'0')+x;
                printf("x=%d\n",x);
            }
        }
    }
}
