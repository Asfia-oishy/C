#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int z[n][3];
    int a[3];
    for(i=0 ; i <n; i++)
    {
        for(j=0; j<3 ; j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
     for(j=0; j<3 ;j++)
     {
          a[p]=0;
          for(i=0; i<n ; i++)
          {
               a[p]=z[i][j]+a[p];
          }
          p++;
     }
     if(a[0]==0 && a[1]==0 && a[2]==0) printf("YES");
     else printf("NO");
     return 0;
}
