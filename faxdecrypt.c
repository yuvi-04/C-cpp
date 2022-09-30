void faxdecrypt(char encrypt[],char decrypt[])
{
    char* p=encrypt;
    char ch;
    char str[10];
    int freq,len,i=0,y,pos=0;
    while(1)
    {
        sscanf(p,"%c%d",&ch,&freq);
        itoa(freq,str,10);
        len=strlen(str);
        printf("ch=%c freq=%d\n",ch,freq);
        for(i=0; i<freq; i++)
        {
            decrypt[pos]=ch;
            pos++;
        }
        p=p+len+1;
        if(*p=='\0')
            break;
    }
}
int main()
{
    char encrypt[]="a12b11c3b13d4f4";
    char decrypt[100];
    faxdecrypt(encrypt,decrypt);
    printf(decrypt);
}
