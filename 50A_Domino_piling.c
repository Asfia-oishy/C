#include<stdio.h>
int main ()
{
    int M,N,p,q;
    double r;
    scanf("%d %d",&M,&N);
    p=M*N;
    r=p/2;
    q=(int)r;
    if(p%2==0)
    {
        printf("%d",q);
    }
    else
    {
        printf("%d",q);
    }
    return 0;
}
