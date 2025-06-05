#include <stdio.h>
struct car1
{
    int wheels;
    double price;
};

int main()
{

    struct car1 c11, c12;
    c11.wheels = 4;
    c11.price = 119231.4;
    printf("Car1:wheels %d and price %lf\n", c11.wheels, c11.price);

    c12 = c11; // assign
    printf("Car2:wheels %d and price %lf\n", c12.wheels, c12.price);
}