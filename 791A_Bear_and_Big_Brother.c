#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=1 ; ;i++)
    {
        a= 3*a;
        b= 2*b;
        if(a>b)
        {printf("%d",i);
            break;}
    }
    return 0;
}