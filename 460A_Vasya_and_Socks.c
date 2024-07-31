#include<stdio.h>
int main()
{
    int n,m,z,p,x,w
    ;
    scanf("%d %d",&n,&m);
    w=n/m;
    z=n%m;
    z=w+z;
    p=n+w;
    if(n<m)
       {
           printf("%d",n);
       }
      else if(n>m)
       {
        for (;z>=m;z=z+x)
        { x=z%m;
          z=z/m;
          p=p+z;}

           printf("%d",p);

       }
       else
       {
           printf("%d",p);
       }

    return 0;
}
