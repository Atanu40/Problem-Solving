#include<stdio.h>
int main()
{
    int n,sum,r,temp;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        sum=0;
        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r;
            temp=temp/10;
        }
        while(sum>9 && sum>=0)
        {
            temp=sum;
            sum=0;
            while(temp!=0)
            {
                r=temp%10;
                sum=sum+r;
                temp=temp/10;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
