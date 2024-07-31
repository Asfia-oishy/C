#include<stdio.h>
int main()
{
    int y,w,a,b;
    scanf("%d %d",&y,&w);
    a=6-y+1;
    b=6-w+1;
    if(y>w && a%2==0)
    {
        printf("%d/%d",a/2,3);
    }
    else if(y>w && a%3==0)
    {
        printf("%d/%d",a/3,2);
    }
    else if(y>w)
    {
        printf("%d/%d",a,6);
    }
    else if(w>y && b%2==0)
    {
        printf("%d/%d",b/2,3);
    }
    else if (w>y && b%3==0)
    {
        printf("%d/%d",b/3,2);
    }
    else if(w>y)
    {
        printf("%d/%d",b,6);
    }
    else if(y=w && a%6==0)
       {
           printf("%d/%d",a/6,1);
       }
    else if(y=w && a%3==0)
        {printf("%d/%d",a/3,2);
        }
    else if(y=w && a%2==0)
    {
        printf("%d/%d",a/2,3);
    }
    else if(y=w)
    {
        printf("%d/%d",a,6);
    }
    return 0;
}

