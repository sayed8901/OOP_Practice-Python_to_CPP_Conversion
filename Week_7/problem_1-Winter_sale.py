# https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

discount_percentage, price_after_discount = map(float, input().split())

initial_price = 100
actual_pricing_percentage = initial_price - discount_percentage

price_without_discount = (price_after_discount * initial_price) / actual_pricing_percentage

print(f"{price_without_discount:.2f}")
