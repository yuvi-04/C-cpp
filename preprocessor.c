#include<stdio.h>
#define sqr(a) a*a
#include "arrayfunction.c"
int main()
{
    int i,j,k,x,y;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={58,45,62,14,78,52,463,25,21,10};
    printar(a);
    printf("\n");
    j=lengthar(a);
    printf("%d \n",j);
    copyar(a,b);
    printar(a);
    printf("\n");
    k=sqr(6+2);
    printf("%d ",k);

}
