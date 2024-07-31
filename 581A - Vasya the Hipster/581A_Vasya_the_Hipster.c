#include<stdio.h>
int main()
{
     int a,b,x,y;
     scanf("%d %d",&a , &b);
     if(a>b)
     {
          x=a-b;
          y=x/2;
          printf("%d %d",b ,y);
     }
     else if(b>a)
     {
          x=b-a;
          y=x/2;
          printf("%d %d",a,y);
     }
     else
     printf("%d %d",a,a-b);
     return 0;
}
