#include <stdio.h>
#include <math.h>

int main()
{

    printf("Circle and Sphere Calculator\n");

    const double PI = 3.141592653589793;
    double radius, area, circumference;
    double surface_area; // added variable
    double volume;       // added variable

    // Prompt user for radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    surface_area = 4 * PI * radius * radius;              // added calculation
    volume = (4.0 / 3.0) * PI * radius * radius * radius; // added calculation

    // Display results
    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);
    printf("Surface area of the sphere: %.2lf\n", surface_area); // added output
    printf("Volume of the sphere: %.2lf\n", volume);             // added output

    return 0;
}