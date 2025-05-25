#include <stdio.h>
// pass by reference
void update(int *ptr) // pass by value//copy create
{

    (*ptr)++;
    return;
    // delete the variable
}
int main()
{
    int var = 4;
    printf("Var=%d\n", var);
    update(&var); //address dite hobeeeeeee
    printf("Var=%d\n", var);
}