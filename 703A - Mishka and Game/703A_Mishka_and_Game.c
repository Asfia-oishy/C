#include<stdio.h>
int main()
{
     int n,a,b,x=0,y=0,i;
     scanf("%d",&n);
     for(i=0; i<n;i++)
     {
          scanf("%d %d",&a,&b);
          if(a>b)
               x++;
          else if(b>a)
               y++;
     }
     if(x>y)
          printf("Mishka\n");
     else if(y>x)
          printf("Chris\n");
     else
          printf("Friendship is magic!^^");
     return 0;
}
