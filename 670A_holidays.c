#include<stdio.h>
int main ()
{
    int n,m,p;
    scanf("%d",&n);
    m=2*(n/7);
    p=n%7;
    if(n>=7 && n%7==0)
    {
        printf("%d %d",m,m);
    }
    else if(n>=2 && n<6)
       {
           printf("0 2");
       }
    else if(n>7 &&n%7==1)
        {
            printf("%d %d",m,m+p);
        }
        else if(n==6)
        {
            printf("1 2");
        }
        else if(n==1)
        {
            printf("0 1");
        }
        else if(n>7 && n%7==6)
        {
            printf("%d %d",m+1,m+2);
        }
        else
        {
            printf("%d %d",m,m+2);
        }
        return 0;
}

