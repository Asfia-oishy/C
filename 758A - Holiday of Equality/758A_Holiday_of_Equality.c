#include<stdio.h>
int main()
{
    int n, i ,j,p, max=0,w=0 ;
    scanf("%d",&n);
    int a[n];
    for(i=n ;i>0 ;i--)
    {
        scanf("%d",&a[i-1]);
        if (a[i-1]>=max)
            max=a[i-1];
            }
 for(j=n;j>0; j--)
    {
        p=max-a[j-1];
        w=w+p;}
 printf ("%d",w);
 return 0;
}
