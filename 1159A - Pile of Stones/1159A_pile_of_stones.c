#include<stdio.h>
int main()
{
     int n,a=0,b=0,i;
     scanf("%d",&n);
     char ara[n];
     scanf("%s",ara);
     for(i=0; i<n;i++)
     {
          if(ara[i]=='+') a++;
          else if(a!=0 && ara[i]=='-')
               a--;
     }
     printf("%d",a);
     return 0;
}
