#include<stdio.h>
int main()
{
     int n,i,j,k,z=0,a=1;
     char x[] = "abcdefghijklmnopqrstuvwxyz";
     scanf("%d",&n);
     char ara[n];
     scanf("%s",ara);
     for(i=0 ; i<n ; i++)
     {
          if(ara[i]>=65 && ara[i]<=90)
               ara[i]='a'+ara[i]-'A';
     }
     for(j=0; j<26 ; j++)
     {
          for(k=0 ; k<n ; k++)
          {
               if(x[j]==ara[k])
               {
                    z++;
                    if(z==a)
                    {a++; break;}
               }

          }
     }
     if(z>=26)
          printf("YES");
     else
          printf("NO");
 return 0;
}
