#include<stdio.h>
int main()
{
     int n,i,j,sum=0;
     scanf("%d",&n);
     char a[n];
     char b[n];
     int x[n],y[n],z[n];
     scanf("%s",a);
     scanf("%s",b);
     for(i=0 ; i<n ; i++)
     {
          x[i]=(int) a[i]-'0';
     }
     for(j=0 ; j<n ; j++)
     {
          y[j]=(int) b[j]- '0';
     }
     for(i=0 ; i<n ; i++)
     {
          if(x[i]>=y[i])
          {
               z[i]= x[i]-y[i];
               if(z[i]>5)
               z[i]=10-z[i];
          }
          else
          {
               z[i]=y[i]-x[i];
               if(z[i]>5)
               z[i]=10-z[i];

          }
     }
     for(j=0 ; j<n ; j++)
     {
          sum=sum+z[j];
     }
     printf("%d",sum);
     return 0;
}
