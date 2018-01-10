#include<stdio.h>
int main()
{
    int num1,num2,i,sum=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1; i<=num2; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("The sum=%d",sum);
}
