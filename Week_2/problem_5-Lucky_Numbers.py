# https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

n = int(input())

first_digit = n // 10
last_digit = n % 10
# print(first_digit, last_digit)

# 0 কে যেকোন নম্বর যেমন: 1,2,3,4...ইত্যাদি দিয়ে ভাগ করলেই 0 পাওয়া যায় মানে তা নিঃশেষে বিভাজ্য, ফলে এখানে last_digit যদি 0 হয় তাহলে YES print করা হচ্ছে.....
if last_digit == 0:
    print("YES")
elif first_digit % last_digit == 0 or last_digit % first_digit == 0:
    print("YES")
else:
    print("NO")
