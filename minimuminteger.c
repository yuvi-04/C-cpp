int main()
{
    int x,y,z;
    printf("enter x,y,z");
    scanf("%d%d%d",&x ,&y ,&z);
    if(x<=y && x<z)
        printf("%d is minimum",x);
    else if(y<=x && y<z)
        printf("%d is minimum",y);
    else
        printf("%d is minimum",z);



}
