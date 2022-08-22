#include<stdio.h>
int main()
{
    int n,k,m,l,total;

    while(scanf("%d%d",&n,&k)!=EOF)
    {

        total=n;

        while(n>=k)
        {

            m=n/k;
            total=total+m;
            n=(n%k)+m;
            if(n>=k)
            {
                continue;

            }
            else
            {
                 break;
            }




        }

        printf("%d\n",total);

    }
    return 0;

}
