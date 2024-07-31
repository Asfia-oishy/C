#include<stdio.h>
int main()
{
    int k,n,w,z;
    scanf("%d %d %d",&k,&n,&w);
    z=k*w*(w+1)/2;
    if(z>n)
        printf("%d",z -n);
    else
        printf("0");
    return 0;
}
