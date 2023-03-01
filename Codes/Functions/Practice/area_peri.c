#include<stdio.h>
int area(int l,int w)
{
    int area ;
    area=l*w;
    return area;
}
int peri(int l,int w)
{
    int peri;
    peri=2*(l+w);
    return peri;
}
int main()
{
    int a,b,x,y;
    printf("Enter the length:");
    scanf("%d",&a);
    printf("Enter the width:");
    scanf("%d",&b);
    x=area(a,b);
    y=peri(a,b);
    printf("The area is %d\n",x);
    printf("The perimeter is %d\n",y);
    return 0;
}