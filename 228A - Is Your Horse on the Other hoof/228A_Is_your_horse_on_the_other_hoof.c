#include<stdio.h>
int main()
{
     int s1,s2,s3,s4,z=0;
     scanf("%d %d %d %d",&s1 ,&s2, &s3, &s4);
     if(s1==s2)
     z++;
     if(s2==s3 || s3==s1)
     z++;
     if(s3==s4 || s4==s2 || s4==s1)
     z++;
     printf("%d",z);
     return 0;

}
