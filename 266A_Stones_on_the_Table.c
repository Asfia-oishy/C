#include<stdio.h>
int main()
{
     int n,i,a=0;
     scanf("%d",&n);
     char c[n];
     scanf("%s",c);
     for(i=0; i<n-1; i++)
     {
          if(c[i]==c[i+1])
               a++;
     }
     printf("%d\n",a);
     return 0;

}
