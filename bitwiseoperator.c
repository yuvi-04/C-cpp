#include <limits.h>
void calculate_the_maximum(int n, int k) {
    int i,j,and,or,xor;
    int maxand,maxor,maxxor;
    maxand=maxor=maxxor=INT_MIN;
    for(i=1; i<n; i++)
    {
        for(j=i+1; i<=n; j++)
        {
            and=i&j;
            maxand=and;
            if(and>maxand)
            {
                maxand=and;
            }
            or=i|j;
            maxor=or;
            if(or>maxor)
            {
                maxor=or;
            }
            xor=i^j;
            maxxor=xor;
            if(xor>maxxor)
            {
                maxxor=xor;
            }
        }
    }
    if(maxand>k)
        maxand=0;
    if(maxor>k)
        maxor=0;
    if(maxxor>k)
        maxxor=0;
    printf("%d\n",maxand);
    printf("%d\n",maxor);
    printf("%d",maxxor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
