// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int first_digit = n / 10;
    int last_digit = n % 10;
    // printf("%d %d\n", first_digit, last_digit);

    // 0 কে যেকোন নম্বর যেমন: 1,2,3,4...ইত্যাদি দিয়ে ভাগ করলেই 0 পাওয়া যায় মানে তা নিঃশেষে বিভাজ্য, ফলে এখানে last_digit যদি 0 হয় তাহলে YES print করা হচ্ছে.....
    if (last_digit == 0)
    {
        printf("YES");
    }
    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}