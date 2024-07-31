#include<stdio.h>
int main()
{
     int n,i,x=0,y=0;
     scanf("%d",&n);
     char ara[n];
     scanf("%s",ara);
     for(i=0 ; i<n ; i++)
     {
          if(ara[i]== 'A')
               x++;
          else
               y++;
     }
     if(x>y)
          printf("Anton");
     else if(y>x)
          printf("Danik");
     else
          printf("Friendship");
     return 0;
}
