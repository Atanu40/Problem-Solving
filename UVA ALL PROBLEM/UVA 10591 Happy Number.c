#include<stdio.h>
int main()
{
    int i,t,n,r,l,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d",&n);
        if(n>=0)
        {
            r=n;
            while(r!=0)
            {

                l=r%10;
                sum=sum+(l*l);
                r=r/10;
                if(r==0)
                {

                    r=sum;
                    sum=0;

                    if(r==4 || r==16 || r==20 || r==37 || r==42 || r==58 || r==89 || r==145)
                    {
                        printf("Case #%d: %d is an Unhappy number.\n",i,n);
                        break;
                    }

                    if(r==1)
                    {
                        printf("Case #%d: %d is a Happy number.\n",i,n);
                        break;

                    }
                }
                else
                {

                    continue;
                }



            }
        }
        else
        {
            break;
        }
    }
}
