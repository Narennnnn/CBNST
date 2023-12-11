
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) -x*y
void main()
{
    float a,b,t,k,h,x,y;
    printf("Enter the values of x0,y0,handxn\n");
    scanf("%f%f%f%f",&a,&b,&h,&t);

    x=a;
    y=b;

    while(x<t)
    {
        k=h*f(x,y);
        y=y+k;
        x=x+h;
        printf("x=%f   y=%f\n",x,y);
    }
}