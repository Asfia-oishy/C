#include<stdio.h>
int main ()
{
    int ara1[5], ara2[5] ,ara3[5] ,ara4[5] ,ara5[5];
    int i;
    for (i=0; i<5 ;i++)
    {
        scanf("%d",&ara1[i]);
        scanf("%d",&ara2[i]);
        scanf("%d",&ara3[i]);
        scanf("%d",&ara4[i]);
        scanf("%d",&ara5[i]);
    }
    if(ara1[0]==1 || ara1[4]==1 || ara5[0]==1 || ara5[4]==1)
        printf("4");
    else if(ara1[1]==1 || ara1[3]==1 || ara2[0]==1 || ara2[4]==1 || ara4[0]==1 || ara4[4]==1 ||ara5[1]==1 || ara5[3]==1)
        printf("3");
    else if(ara1[2]==1 || ara2[1]==1 || ara2[3]==1 || ara3[0]==1 ||ara3[4]==1 ||ara4[1]==1 ||ara4[3]==1 ||ara5[2]==1)
        printf("2");
    else if (ara3[2]==1)
        printf("0");
    else
        printf("1");
    return 0;
}
