#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("Enter a Number");
    scanf("%d",&n);
    s=fact(n);
    printf("Factorial of %d is %d",n,s);
    return 0;
}
int fact(int a)
{
    int i,sum=1;
    for(i=1;i<=a;i++)
    {
        sum=sum*i*1;
    }
    return sum;
}