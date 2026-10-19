#include <cstdio>
#include <cmath>
//write a program that computes the volume of a sphere with a 10-meter radius, using the formula v= 4/3tr. Write the fraction 4/3 as 4. 0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
//twice to compute r.
double volume;
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius); //float accepts both int and float
    volume = (radius * radius * radius) * M_PI * 4.0f/3.0f;
    printf("Volume: %f\n", volume);
    return 0;
}
