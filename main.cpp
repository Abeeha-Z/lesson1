#include <cstdio>
#include <cmath>
using namespace std;
//write a program that computes the volume of a sphere with a 10-meter radius, using the formula v= 4/3tr. Write the fraction 4/3 as 4. 0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
//twice to compute r.
int main()
{
    float amount;
    float withtax;
    printf("Enter amount: ");
    scanf("%f", &amount); //float accepts both int and float
    withtax = (amount) * 1.05;
    printf("Amount with tax: %.2f\n", withtax);
    return 0;
}
