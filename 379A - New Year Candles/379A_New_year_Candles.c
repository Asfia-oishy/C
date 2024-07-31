#include<stdio.h>
int main()
{
    int a,b,z,p,x,w;
    scanf("%d %d",&a,&b);
    w=a/b;
    z=a%b;
    z=w+z;
    p=a+w;
    if(a<b)
       {
           printf("%d",a);
       }
      else if(a>b)
       {
        for (;z>=b;z=z+x)
        { x=z%b;
          z=z/b;
          p=p+z;}

           printf("%d",p);

       }
       else
       {
           printf("%d",p);
       }

    return 0;
}
