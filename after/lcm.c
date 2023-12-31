//lowest common multiple
#include<stdio.h>
main()
{
    int a,b,m;
    printf("enter two number.\n");
    scanf("%d %d",&a,&b);
    m=(a>b)?a:b;
    while(1)
    {
        if(m%a==0&&m%b==0)
        {
            printf(" THE LCM OF %d and %d is=%d\n",a,b,m);
        }
        ++m;
    }
    return 0;
}
