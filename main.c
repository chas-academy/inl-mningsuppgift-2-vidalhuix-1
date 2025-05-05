#include <stdio.h>

// This is where you add the two functions

float fahrenheit_to_celsius(float F)
{
    return ((F - 32) * 5.0) / 9;
}

float celsius_to_fahrenheit(float C)
{
    return (C * 9 / 5.0) + 32;
}

int main()
{
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f)); // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c)); // Expected output: 98.6

    return 0;
}