#include<stdio.h>
int main()
{
     int a,b,c,ara[6],max=0,i;
     scanf("%d %d %d",&a,&b,&c);
     ara[0]=a+b*c;
     ara[1]=a*(b+c);
     ara[2]=a*b*c;
     ara[3]=(a+b)*c;
     ara[4]=a+b+c;
     ara[5]=(a*b)+c;
     for(i=0; i<6; i++)
     {
          if(ara[i]>=max)
               max=ara[i];
     }

     printf("%d",max);
     return 0;
}
