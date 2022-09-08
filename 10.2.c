#include<stdio.h>
int si(int,int,int);
int main()
{
    int p,r,t,s;
    printf("Enter Principal, Rate of Interest and Time period for calculating simple interest");
    scanf("%d%d%d",&p,&r,&t);
    s=si(p,r,t);
    printf("Simple Interest is %d",s);
    return 0;

}
int si(int a,int b,int c)
{
    int result;
    result=a*b*c;
    return result;
}