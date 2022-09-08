#include<stdio.h>
void fonn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    fonn(n);
    return 0;
}
void fonn(int a)
{
    int i;
    for(i=1;i<=a;i=i+2)
    {
        printf("%d ",i);
    }
}