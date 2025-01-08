// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float discount_percentage;
    int price_after_discount;
    cin >> discount_percentage >> price_after_discount;

    int initial_price = 100;
    float actual_pricing_percentage = initial_price - discount_percentage;

    float price_without_discount = (price_after_discount * initial_price) / actual_pricing_percentage;

    cout << fixed << setprecision(2) << price_without_discount;

    return 0;
}
