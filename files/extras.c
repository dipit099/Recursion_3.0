#include<stdio.h>

#define PI 3.14159265358979323846264338327950288419716939937510

#define SQUARE(x) ((x) *(x))
#define TRIPLE(x) (3*(x))

int main(){
    //area of a circle

    int radius=5;
    //double area= 3.1415 * radius * radius;
    // double area= PI * radius * radius;

    double area= PI * SQUARE(radius);

    //double area= () * ((radius) *(radius))
    printf("Area = %lf\n",area); 

    int ans = TRIPLE(20);
    printf("Ans = %d\n",ans);

    
}