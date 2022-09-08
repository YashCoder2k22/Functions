#include<stdio.h>
void primefctr(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    primefctr(n);
    return 0;
}
void primefctr(int a)
{
    int i,j;
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
            a=a/i;
            i--;
        }
        
    }
}