#include<stdio.h>
float areacircle(float);
int main()
{
    float x,s;
    printf("Enter radius of circle");
    scanf("%f",&x);
    s=areacircle(x);
    printf("Area of circle is %f",s);
    return 0;
}
float areacircle(float r)
{
    int a;
    a=3.14*r*r;
    return a;
    
}