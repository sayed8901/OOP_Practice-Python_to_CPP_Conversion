// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float discount_percentage;
    int price_after_discount;
    scanf("%f %d", &discount_percentage, &price_after_discount);

    int initial_price = 100;
    float actual_pricing_percentage = initial_price - discount_percentage;

    float price_without_discount = (price_after_discount * initial_price) / actual_pricing_percentage;

    printf("%0.2f", price_without_discount);

    return 0;
}
