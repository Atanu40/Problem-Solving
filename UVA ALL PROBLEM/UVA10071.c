#include<stdio.h>
int main()
{
    int v,t,s1,s2;

    while(scanf("%d %d",&v,&t)!=EOF)
    {
        if((-100<=v) && (v<=100) && (0<=t)&& (t<=200))
        {
            s1=v*t;
            s2=s1*2;
            printf("%d\n",s2);
        }
    }
    return 0;
}
