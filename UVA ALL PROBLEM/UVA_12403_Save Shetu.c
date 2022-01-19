#include<stdio.h>
#include<string.h>
int main()
{
    int t,l=0,m;
    char ch[20];
    scanf("%d\n",&t);

    while(t>=1)
    {
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%d\n",&m);
            l=l+m;
        }
        else
        {
            printf("%d\n",l);
        }
        t--;
    }

}
