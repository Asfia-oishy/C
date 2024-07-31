#include<stdio.h>
int main()
{int n,k,z=0,i;
    scanf("%d %d",&n,&k);
    int ara[n];
    for(i=0;i<n; i++)
    {scanf("%d",&ara[i]);}
    for(i=0;i<n;i++)
    {if(ara[i]>=ara[k-1] && ara[i] !=0)
        z++;}
    printf("%d",z);
    return 0;
    }