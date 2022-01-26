#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,l;
    int count,x;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)!=EOF)
    {
        count=0;

        if(a!=0 || b!=0 || c!=0 || d!=0 || l!=0)
        {
            for( x=0; x<=l; x++)
            {
                int x1=a*pow(x,2)+b*x+c;

                if(x1%d==0)
                {
                    count++;
                }

            }
            printf("%d\n",count);


        }

        else
        {
            break;
        }






    }

    return 0;

}

