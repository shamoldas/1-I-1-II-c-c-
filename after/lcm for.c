//lowest common multiple
#include<stdio.h>
main()
{
    int a,b,i,gcd,lcm;
    printf("enter two number.\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    lcm=(a*b)/gcd;
    printf(" the lcm of two number %d and %d is=%d",a,b,lcm);
    return 0;
}

