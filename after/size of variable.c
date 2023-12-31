#include<stdio.h>
main()
{
    int a;
    float b;
    char c;
    double d;
    long l;
    long long e;
    long double ld;
    printf("size of integer:%ld byte.\n",sizeof(a));
    printf("size of float:%ld byte.\n",sizeof(b));
    printf("size of char:%ld byte.\n",sizeof(c));
    printf("size of double:%ld byte.\n",sizeof(d));
    printf("size of long:%ld byte.\n",sizeof(l));
    printf("size of long long :%ld byte.\n",sizeof(e));
    printf("size of long double:%ld byte.\n",sizeof(ld));
    return 0;
}
