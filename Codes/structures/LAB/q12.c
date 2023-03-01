#include<stdio.h>
int main()
{
    struct branch
    {
        char bran[10] = "Bangalore"; // not possible.
        int bpin = 431;
    };
    struct headoff
    {
        char head[10];
        int hpin;
    };
    struct headoff h = {"chennai",01};
    struct branch b;
    printf("HO-%s\n hpin - %d",h.head,h.hpin);
    printf("BO-%s\n bpin - %d",b.bran,b.bpin);
}
// Compilation Error.