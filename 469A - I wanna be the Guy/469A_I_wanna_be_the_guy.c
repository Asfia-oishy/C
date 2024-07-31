#include<stdio.h>
int main()
{
     int n,i,j,p,q,k,x=0,y=0;
     scanf("%d",&n);
     scanf("%d",&p);
     int ara[p];
     for(j=0 ; j<p ; j++)
     {
          scanf("%d",&ara[j]);
     }
     scanf("%d",&q);
     int ar[q];
     for(i=0 ;i<q; i++)
     {
          scanf("%d",&ar[i]);
          for(k=0 ;k<p ;k++)
          {
               if(ar[i]!=ara[k])
                    x++;

          }
          if(x==p)
               y++;
          x=0;
     }
     if((y+p)==n)
          printf("I become the guy.");
     else
          printf("Oh, my keyboard!");
     return 0;
}
