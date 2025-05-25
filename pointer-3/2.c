#include <stdio.h>

void update(int var) // pass by value//copy create
{
    var++;

    // delete the variable
}
int main()
{
    int var = 4;
    printf("Var=%d", var);
    update(var);
    printf("Var=%d", var);
}