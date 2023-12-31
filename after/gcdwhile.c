#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("input two number.\n");
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a-=b;//a=a-b;
        else
            b-=a;//b=b-a;
    }
    printf("GCD=%d\n",a);
    return 0;
}
