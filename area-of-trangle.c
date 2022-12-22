#include <stdio.h>

 main()
{
    float b,h,area;
    printf("give base of triangle:");
    scanf("%f", &b);
    printf("give height of triangle:");
    scanf("%f", &h);
    area = 0.5 * b * h;
    printf("area of triangle: %f", area);
    return 0;
}
