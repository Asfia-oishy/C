#include<stdio.h>
int main()
{
     char ara[105];
     int i,len,j,k,x=0;
     scanf("%s",ara);
     len=strlen(ara);
     for(i=0 ; i<len ; i++)
     {
          if(ara[i]>='A' && ara[i]<='Z')
          {
               x++;
          }
     }
     if(x==len)
     {
          for(j=0;j<len;j++)
          {
               ara[j]='a'+ara[j]-'A';
          }
          printf("%s",ara);

     }
     else if(ara[0]>='a'&&ara[0]<='z'&& x==len-1)
     {
          ara[0]='A'+ara[0]-'a';
          for(k=1;k<len;k++)
          {
               ara[k]='a'+ara[k]-'A';
          }
          printf("%s",ara);
     }
     else
     printf("%s",ara);
     return 0;
}
