#include<stdio.h>
int main()
{
     char ara[1000];
     scanf("%s",ara);
     if(ara[0]>91)
        ara[0]='A'+ara[0]- 'a';
    printf("%s",ara);
    return 0;
}
