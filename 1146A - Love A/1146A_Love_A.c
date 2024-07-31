#include<stdio.h>
#include<string.h>
int main()
{
     int x=0,y=0,i,j,len;
     char ara[1000];
     scanf("%s",ara);
     len=strlen(ara);
     for(i=0;i<len;i++)
     {
          if(ara[i]=='a') x++;
          else y++;
     }
     if(x>len/2) printf("%d\n",len);
     else
     {
          for(j=0; ;j++)
          {
               y=y-1;
               if(y<x)
               {
                    printf("%d\n",x+y);
                    break;
               }
          }
     }

}

