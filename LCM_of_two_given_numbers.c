#include<stdio.h>
int main()
{
    int m,a,i,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
    m=a*i;
    if(m%b==0)
    {
        printf("%d",m);
        break;
    }
    }
    
}