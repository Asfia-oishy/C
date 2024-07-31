#include<stdio.h>
int main()
{
    int n,x,i,y;
    scanf("%d",&n);
    for(i=1; 5*i<n ;i=2*i)
    {
         n=n-5*i;
    }
    y=(n-1)/i;
    if(y==0) printf("Sheldon\n");
    else if(y==1) printf("Leonard\n");
    else if(y==2) printf("Penny\n");
    else if(y==3) printf("Rajesh\n");
    else printf("Howard\n");
    return 0;
}
