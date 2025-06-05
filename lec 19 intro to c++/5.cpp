#include <iostream>

// Custom function to demonstrate
int myFunction()
{
    int temp = 1 + 3;
    return temp;
}

int main()
{
    int userInput;         // Changed variable name to avoid conflict with std::cin
    std::cin >> userInput; // Reading input from user
    std::cout << "Here is my output: " << userInput << std::endl;

    // Calling custom function and displaying result
    int temp = myFunction();
    std::cout << "Here is our new temp variable value: " << temp << std::endl;

    return 0;
}
