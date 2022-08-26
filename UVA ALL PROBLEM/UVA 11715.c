#include<stdio.h>
#include<math.h>
int main()
{
    int test;
    int count=0;
    double t,u,v,a,s;

    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
        {
            break;
        }

        else if(test==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            s=(float)((u+v)*t)/2.0;
            a=(float)(v-u)/t;
            count++;
            printf("Case %d: %.3f %.3f\n",count,s,a);

        }
        else if(test==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);

            t=(float)(v-u)/a;
            s=(float)(u+v)*t/2;
            count++;
            printf("Case %d: %.3f %.3f\n",count,s,t);

        }
        else if(test==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=(float)sqrt((u*u)+(2*a*s));
            t=(float)(v-u)/a;
            count++;
            printf("Case %d: %.3f %.3f\n",count,v,t);

        }

        else if(test==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=(float)sqrt(v*v-2*a*s);
            t=(float)(v-u)/a;
            count++;
            printf("Case %d: %.3f %.3f\n",count,u,t);

        }

    }
    return 0;
}
