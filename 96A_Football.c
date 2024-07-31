#include<string.h>
int main()
{
    char team[100];
    int i,p=1;
    int len;
    scanf("%s",team);
    len=strlen(team);
    for (i=0; i<len-1 ;i++)
    {
        if(team[i]==team[i+1])
      {
          p=p+1;
           }
        else
        {
            if(p>=7)
            {
                break;
                }
            else
            {
                p=1;
                }
                    }
                    }

    if(p>=7)
        printf("YES");
    else
        printf("NO");
                return 0;
}


