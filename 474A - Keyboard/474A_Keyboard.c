#include<stdio.h>
int main()
{
     char ara[]="qwertyuiopasdfghjkl;zxcvbnm,./";
     int i,j,p,q,k,len;
     char m,z[100];
     scanf("%c",&m);
     scanf("%s",z);
     len=strlen(z);
     if(m=='R')
     {
          for(p=0;p<len;p++)
          {
               for(j=0;j<30 ;j++)
               {
                    if(z[p]==ara[j])
                         {
                              printf("%c",ara[j-1]);
                              break;
                         }
               }
          }
     }
     else if(m=='L')
     {
          for(q=0;q<len;q++)
          {
               for(k=0;k<30;k++)
               {
                    if(z[q]==ara[k])
                         {
                              printf("%c",ara[k+1]);
                              break;
                         }
               }
          }
     }
     return 0;
}
