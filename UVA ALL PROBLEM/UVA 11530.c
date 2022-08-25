#include<stdio.h>
#include<string.h>

int main()
{


    int T,i,j;






    for(i=0; i<T; i++)
    {
        scanf("%d ",&T);
        char str[200];
        gets(str);
        int len=strlen(str);


        int sum=0;
        for(j=0; j<=len; j++)
        {
            if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ')
            {
                sum=sum+1;
            }
            else if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x')
            {
                sum=sum+2;
            }
            else if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y')
            {
                sum=sum+3;
            }
            else if(str[j]=='s' || str[j]=='z')
            {
                sum=sum+4;
            }
        }
        printf("Case #%d: %d\n",i+1,sum);
    }


}
