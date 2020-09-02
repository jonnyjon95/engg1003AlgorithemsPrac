#include <stdio.h>
#include <stdlib.h>

//Task 3
/*int main()
{
    int n1,n2,n3,n4,n5;
    float result;

    //input
    printf("Enter 5 numbers: \n\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    //process
    result = (n1 + n2 + n3 + n4 + n5) / 5;

    //output
    printf("\nAverage: %f", result);

    return 0;
}
*/

//Task 4
int main()
{
    float rad, area;
    const float pi=3.14152;

    //input
    printf("Enter the radius in cm: ");
    scanf("%f", &rad);

    //process
    area = pi * rad * rad;

    //output
    printf("Area: %f", area);

    return 0;
}
