#include<stdio.h>
#include<string.h>
int main()
{
     int i,len;
     char ara[100];
     scanf("%s",ara);
     len=strlen(ara);
     for(i=0; i<len ;i++)
     {
          if(ara[i]!='A' && ara[i]!='a' && ara[i]!='E'&& ara[i]!='e' &&ara[i]!='I'&& ara[i]!='i'&&ara[i]!='o'&&ara[i]!='O'&&ara[i]!='U'&&ara[i]!='u'&&ara[i]!='Y'&&ara[i]!='y')
               {
                    if(ara[i]>='A'&&ara[i]<='Z')
                         ara[i]='a'+ara[i]-'A';
                    printf(".%c",ara[i]);
               }


     }
     return 0;
}

