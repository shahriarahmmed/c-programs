#include <stdio.h>

main()
{
    float a,b,c,sum,avg;
    printf("Give me 3 number:");
    scanf("%f%f%f", &a,&b,&c);
    sum = a+b+c;
    avg = sum/3;
    printf("Average of three number is: %f", avg);
    return 0;
}
