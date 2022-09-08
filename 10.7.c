#include<stdio.h>
int comb(int,int);
int main()
{
    int n,r,s;
    printf("Enter number of items and number of items selected from that items");
    scanf("%d%d",&n,&r);
    s=comb(n,r);
    printf("Combinations is %d",s);
    return 0;
}
int comb(int a,int b)
{
    int i,j,k,sum1=1,sum2=1,sum3=1,result;
    for(i=1;i<=a;i++)
    {
      sum1=sum1*i*1;
    }
    for(j=1;j<=b;j++)
    {
        sum2=sum2*j*1;
    }
    for(k=1;k<=a-b;k++)
    {
        sum3=sum3*k*1;
    }
    result=(sum1)/((sum3)*sum2);
    return result;
}