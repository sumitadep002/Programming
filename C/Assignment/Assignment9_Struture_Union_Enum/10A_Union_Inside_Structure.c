/*
Try out nesting of structures, unions
(a) Union inside a structure
*/
#include<stdio.h>
struct Area
{
    
    union
    {
        int radius;
        int height;
    };
};
int main(){
    struct  Area r,h;
    r.radius = 15;
    h.height = 10;
    int area;

    area = (2 * 3.14 * r.radius * h.height) + (2 * 3.14 * r.radius *r.radius);

    printf("the area of the cylinder is: %d units",area);
}