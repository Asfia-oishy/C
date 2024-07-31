#include<stdio.h>
int main()
{
     int n,a=0,i;
     scanf("%d",&n);
     int ara[n];
     for(i=0 ; i<n ;i++)
     {
          scanf("%d",&ara[i]);
     }
     for(i=0; i<n;i++)
     {
          if(ara[i]==0)
               a++;
     }
     if(a==n)
          printf("EASY\n");
     else
          printf("HARD\n");
     return 0;
}
