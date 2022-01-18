#include<stdio.h>
int main()
{
  long  long int a,b,c,result;

    while(scanf("%lld%lld%lld",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }

       if(a!=0 || b!=0 ||c!=0)
       {
           if((a*a)+(b*b)==c*c)
           {
               printf("right\n");
           }
           else if((a*a)+(c*c)==b*b)
           {
               printf("right\n");
           }
           else if((b*b)+(c*c)==a*a)
           {
               printf("right\n");
           }
           else{
            printf("wrong\n");
           }

       }



    }


}
