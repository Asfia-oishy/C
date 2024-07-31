#include<stdio.h>
int main()
{
     int n,k,i,r=0,x=0,p=0;
     scanf("%d %d",&n,&k);
     int ara[n];
     for(i=0; i<n ;i++)
     {
          scanf("%d",&ara[i]);
          ara[i]=x+ara[i];
         if(ara[i]>8 )
          {
               x=ara[i]-8;
               ara[i]=8;


          }
          else x=0;
          p=ara[i]+p;

          r++;
          if(p>=k)
               break;
     }
     if(r<=n && p>=k)
          printf("%d",i+1);
     else
          printf("-1");
     return 0;
}
