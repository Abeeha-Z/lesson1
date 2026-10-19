#include <cstdio>
#include <cmath>
//write a program that computes the volume of a sphere with a 10-meter radius, using the formula v= 4/3tr. Write the fraction 4/3 as 4. 0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
//twice to compute r.
float value;
int main()
{
    float num;
    printf("Enter the value of x: ");
    scanf("%f", &num); //float accepts both int and float
    value = ((((((3 * num)+ 2) * num - 5) * num - 1) * num + 7) * num -6);
    printf("3x^5 + 2x^4 - 5x^3 - x^2 +7x - 6 = %f\n", value);
    return 0;
}
