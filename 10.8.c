#include<stdio.h>
int comb(int,int);
int main()
{
    int n,r,s;
    printf("Enter number of items and number of items selected from that items");
    scanf("%d%d",&n,&r);
    s=comb(n,r);
    printf("Permutations is %d",s);
    return 0;
}
int comb(int a,int b)
{
    int i,k,sum1=1,sum2=1,result;
    for(i=1;i<=a;i++)
    {
      sum1=sum1*i*1;
    }
    for(k=1;k<=a-b;k++)
    {
        sum2=sum2*k*1;
    }
    result=sum1/sum2;
    return result;
}