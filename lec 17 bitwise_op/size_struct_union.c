#include <stdio.h>
#include <string.h>

// 32bit
// 64bit

// Print the size of basic types
void printBasicTypes()
{
    printf("=== Basic Type Sizes ===\n");
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of char[10]: %lu\n", sizeof(char[10]));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of double: %lu\n", sizeof(double));
    printf("\n");
}

// Struct with same types
struct Struct1
{
    int a;
    int b;
};

// Union with same types
union Union1
{
    int a;
    int b;
};

// Struct with mixed types
struct Struct2
{
    char c;
    int i;
    double d;
};

// Union with mixed types
union Union2
{
    char c;
    int i;
    double d;
};

// Struct with array
struct Struct3
{
    char name[10];
    int id;
};

// Union with array
union Union3
{
    char name[10];
    int id;
};

int main()
{
    printBasicTypes();

    // === Sizes ===
    printf("=== Struct vs Union Sizes ===\n");
    printf("Struct1 (2 ints): %lu bytes\n", sizeof(struct Struct1));
    printf("Union1  (2 ints): %lu bytes\n", sizeof(union Union1));

    printf("Struct2 (char, int, double): %lu bytes\n", sizeof(struct Struct2));
    printf("Union2  (char, int, double): %lu bytes\n", sizeof(union Union2));

    printf("Struct3 (char[10], int): %lu bytes\n", sizeof(struct Struct3));
    printf("Union3  (char[10], int): %lu bytes\n", sizeof(union Union3));

    return 0;
}
