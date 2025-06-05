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
    // precision error if we use float

    // print

    printf("Car1:wheels %d and price %lf\n", c11.wheels, c11.price);

    // 2nd way
    struct car1 c13 = {2, 954};
    printf("Car3:wheels %d and price %lf\n", c13.wheels, c13.price);

    // Correct? YES OR NO
   // struct car1 c14;
    //c14 = {3, 500}; // ERROR
}