#include <stdio.h>
#include <string.h>
struct car
{
    int wheels;
    double price;
};

struct info
{
    char owner[100];
    int salary;
};

struct info getCredentials(struct car tempCar)
{
    struct info infoVar;
    if (tempCar.price > 1000)
    {
        strcpy(infoVar.owner, "Raju");
        infoVar.salary = 1000000;
    }
    else
    {
        strcpy(infoVar.owner, "Mofis");
        infoVar.salary = 500;
    }
    return infoVar;
}

int main()
{
    struct car carVar = {4, 20000};

    struct info infoVar2 = getCredentials(carVar);
    printf("Name of the owner is %s\n", infoVar2.owner);
    printf("Salary of the owner is %d", infoVar2.salary);
}
