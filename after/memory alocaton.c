
#include<stdio.h>
main()
{
    int i,n,f,l,arr[77];
    float *d;
    printf("input array size.\n");
    scanf("%d",&n);
    d=(float*)calloc(n,sizeof(float));
    if(d=NULL)
    {
        printf("error of memory allocated.\n");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("enter the number %d:\n",i+1);
        scanf("%f",&d+i);
    }
    for(i=1;i<n;i++)
    {
        if(*d<*(d+i))
            *d=*(d+i);
    }
    printf("large element:%.3f\n",*d);
    return 0;
}


