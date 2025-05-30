#include <stdio.h>
#include <string.h>

struct info
{
    char importer[100];
    int salary;
};

struct car
{
    int wheels;
    double price;
    struct info infoVar;
};

struct car getCredentials(struct car tempCar)
{
    if (tempCar.price > 100000)
    {
        strcpy(tempCar.infoVar.importer, "Raju");
        tempCar.infoVar.salary = 50000;
    }
    else
    {
        strcpy(tempCar.infoVar.importer, "Mofis");
        tempCar.infoVar.salary = 200;
    }
    return tempCar;
}

int main()
{

    struct car carVar;  //int wheels  // car carVar;
    carVar.wheels = 4;
    carVar.price = 230293;
    printf("Wheel of the car is %d\n", carVar.wheels);
    printf("Price of the car is %lf\n", carVar.price);
    printf("Name of the importer  is %s\n", carVar.infoVar.importer);
    printf("Salary of the importer  is %d\n", carVar.infoVar.salary);

    printf("\n");

    struct car infoVar2 = getCredentials(carVar); //returned
    printf("Wheel of the car is %d\n", infoVar2.wheels);
    printf("Price of the car is %lf\n", infoVar2.price);
    printf("Name of the importer  is %s\n", infoVar2.infoVar.importer);
    printf("Salary of the importer is %d\n", infoVar2.infoVar.salary);
}
