#include<stdio.h>
int main()
{
     int n,i,a=0,b=0,j;
     scanf("%d",&n);
     char ara[n];
     scanf("%s",ara);
     for(i=0 ;i<n ;i++)
     {
          if(ara[i]=='0')
               a++;
          else
               b++;
     }
     if(a>b)
          j=a-b;
     else
          j=b-a;
     printf("%d",j);
     return 0;
}
