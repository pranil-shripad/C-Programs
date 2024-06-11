// Structure example
#include <stdio.h>
// Define a structure for representing a point in 2D space
struct Point
{
    int x;
    float y;
    char z;
} p1;
int main()
{
    // Declare a variable of type Point
    // struct Point p1;
    // Assign values to the members of the structure
    p1.x = 5;
    p1.y = 10.6;
    p1.z = 'a';

    // Access and print the values of the structure members
    printf("Coordinates of the point: (%d, %f, %c)\n", p1.x, p1.y, p1.z);
    return 0;
}
