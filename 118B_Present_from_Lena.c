#include<stdio.h>
int main()
{
     int n,i,j,z,m,p;
     scanf("%d",&n);
     for(i=0;i<n+1;i++)
     {
          p=0;
          for(j=0;j<n+i+1;j++)
          {
               if(j>=n-i)
               {
                    if(p==0 && j>n || i==0) printf("%d", p);
                    else printf("%d ",p);
                    if(j>=n) p--;
                    else p++;
               }
               else printf("  ");
          }
          printf("\n");
     }
     for(i=n-1;i>=0;i--)
     {
          p=0;
          for(j=0;j<n+i+1;j++)
          {
               if(j>=n-i)
               {
                    if(p==0 && j>n || i==0) printf("%d", p);
                    else printf("%d ",p);
                    if(j>=n) p--;
                    else p++;
               }
               else printf("  ");
          }
          printf("\n");
     }
}
