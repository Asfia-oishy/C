#include<stdio.h>
int main()
{
     int n,m ,z;
     scanf("%d %d", &n, &m);
     z=n*m;
     if(n>m)
     {
          if(m%2==0)
               printf("Malvika");
          else
               printf("Akshat");
     }
     else if(n<m)
      {
           if(n%2==0)
               printf("Malvika");
           else
               printf("Akshat");
      }
      else if(n==m)
      {
           if(n%2==0)
               printf("Malvika");
           else
               printf("Akshat");
      }

     return 0;

}
