#include<string.h>
int main()
{
     char s[100];
     int len,i,u=0,l=0;
     scanf("%s",s);
     len=strlen(s);
     for(i=0 ; i<len ;i++)
     {
          if(s[i]>=65 && s[i]<=90)
               u++;
          else if(s[i]>=97 && s[i]<=122)
               l++;

     }
     if(u>l)
         { for(i=0;i<len ; i++)
              {
                   if(s[i]>=97 && s[i]<=122)
                  s[i]='A'+s[i]- 'a';}
                  printf("%s",s);
         }

     else
         {
              for(i=0 ; i<len; i++)
              {
                if(s[i]>=65 && s[i]<=90)
                s[i]= 'a'+ s[i]- 'A';
              }
              printf("%s",s);
         }
         return  0;
     }
