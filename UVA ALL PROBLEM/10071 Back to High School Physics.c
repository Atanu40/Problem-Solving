#include<stdio.h>
#include<limits.h>
int main()
{
    int t,v,s;
    while(scanf("%d%d",&v,&t)!=EOF)
    {
        int s=(v*t)*2;
        printf("%d\n",s);
    }
    return 0;

}
