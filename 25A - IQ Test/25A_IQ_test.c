#include<stdio.h>
int main()
{
     int n,i,j,a=0,b=0;
     scanf("%d",&n);
     int ara[n];
     for(i=0 ;i<n ;i++)
     {
          scanf("%d",&ara[i]);
          if(ara[i]%2==0) a++;
          else b++;
     }
     if(b==1)
     {
          for(j=0; j<n;j++)
          {
               if(ara[j]%2!=0)
                    printf("%d",j+1);
          }
     }
     else
     {
          for(j=0 ; j<n ; j++)
          {
               if(ara[j]%2==0)
                    printf("%d",j+1);
          }
     }
     return 0;
}
