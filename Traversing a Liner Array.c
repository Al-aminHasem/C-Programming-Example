#include<stdio.h>
int main()
{
    int LA[5],K;
    K=0;
    while(K<5)
    {
        scanf("%d",&LA[K]);
        K++;
    }
    for(K=0;K<5;K++)
    {
        printf(" %d",LA[K]);
    }

}
