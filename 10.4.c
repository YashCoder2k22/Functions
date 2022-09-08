#include<stdio.h>
void fnn(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fnn(n);
    return 0;
}
void fnn(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);

    }
}