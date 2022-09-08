#include<stdio.h>
int matchdigit(int,int);
int main()
{
    int n,d,s;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter number of digits");
    scanf("%d",&d);
    s=matchdigit(n,d);
    if(s==d)
    {
        printf("Given number contains given digit");
    }
    else
    {
        printf("Given number does not contains given digit");
    }
    return 0;
}
int matchdigit(int a,int b)
{
    int digit,rem,count=0;
    while(a)
    {
        rem=a%10;
        a=a/10;
        count++;
    }
    return count;
}