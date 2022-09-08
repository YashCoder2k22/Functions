#include<stdio.h>
int evenodd(int);
int main()
{
    int x,s;
    printf("Enter a Number");
    scanf("%d",&x);
    s=evenodd(x);
    if(s==1)
    {
        printf("Number is Even");
    }
    if(s==0)
    {
        printf("Number is odd");
    }
    return 0;
}
int evenodd(int a)
{
    if(a%2==0)
    {
        return 1;
    }    
    else
    {
        return 0;
    }    
}
