// returning a pointer from a function

#include <stdio.h>

int *fun()
{
    // variable//// return//scope r outside e gele variable delete hye jae

    static int noofStudents = 10;
    // static keyword !!!! ...prog LIVEEE tototkhon ei variable ta delete hote parbena!!
    // count++ //count delete !! //login ///LOST !!!
    // static keyword

    return (&noofStudents);
}
int main()
{
    int *ptr;
    ptr = fun();
    printf("Address stored in ptr=%p\n ", ptr);
    printf("no of students = %d", *ptr);
}