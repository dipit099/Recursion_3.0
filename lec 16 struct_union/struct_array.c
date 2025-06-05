#include <stdio.h>
struct car1
{
    int wheels;
    double price;
};

int main()
{
    struct car1 car_array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %lf", &car_array[i].wheels, &car_array[i].price);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Car %d : wheels=%d price=%lf\n", i+1, car_array[i].wheels, car_array[i].price);
    }
}
