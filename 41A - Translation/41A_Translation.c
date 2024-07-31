#include<stdio.h>
#include<string.h>
int main()
{
     char s[105];
     char t[105];
     int len1, len2 ,i,c=0,j;
     scanf("%s %s",s,t);
     len1 = strlen(s);
     len2 = strlen(t);
     for(i=len1-1,j=0; i>=0 ;i--,j++)
     {
          if(s[i]==t[j])
          c++;
          }
          if(c==len1 && c==len2)
               printf("YES\n");
          else
               printf("NO\n");
          return 0;
}
