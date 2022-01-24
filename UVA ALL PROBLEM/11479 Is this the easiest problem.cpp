#include<stdio.h>
int main()
{
    long long int x=1;
    int T;
    scanf("%d",&T);




    while(T>=1 && ((x<=T)||(x>T)))
    {
        long long int a,b,c;

        scanf("%lld%lld%lld",&a,&b,&c);
        if((a+b)<=c ||(b+c)<=a ||(c+a)<=b )
        {
            printf("Case %lld: Invalid\n",x);
        }
        else if((a<=0) ||(b<=0)||(c<=0))
        {
            printf("Case %lld: Invalid\n",x);
        }
        else if((a==b)&&(b==c)&&(c==a))
        {
            printf("Case %lld: Equilateral\n",x);
        }
        else if((a==b)||(b==c)||(a==c))
        {
            printf("Case %lld: Isosceles\n",x);
        }
        else if((a!=b)&&(b!=c)&&(c!=a))
        {
            printf("Case %lld: Scalene\n",x);
        }

        x++;
        T--;

    }
}







