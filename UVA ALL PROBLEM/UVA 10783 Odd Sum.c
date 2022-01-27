#include<stdio.h>
int main()
{
    int i,a,b,t,j,sum;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a%2==0)
        {
            a+=1;
        }
        for(i=a; i<=b; i+=2)
        {
            sum=sum+i;
        }
        printf("Case %d: %d\n",j,sum);

    }

    return 0;
}
