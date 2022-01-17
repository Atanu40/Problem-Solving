#include<stdio.h>
int main()
{
   long  int m,n;
    while(scanf("%ld%ld",&m,&n)==2)
    {
        long int k=(m*n)-1;
        printf("%ld\n",k);
    }

}
