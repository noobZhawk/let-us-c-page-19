#include <stdio.h>
#define pi 3.14159
int main()
{
    int l,b;
    float r;
    printf("Enter the Length and breadth:");
    scanf("%d %d",&l,&b);
    printf("Enter the radius of Circle:");
    scanf("%f",&r);


    printf(" area of rectangle :%d\n perimeter of rectangle :%d\n",l*b,2*(l+b));
    printf(" area of circle :%.4f\n Circumference of circle :%.4f\n",pi*r*r,2*pi*r);


}
