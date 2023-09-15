#!/usr/bin/python3
# Function to check if a number is a palindrome
def is_palidrome(number):
    return str(number) == str(number)[::-1]

largest_palidrome = 0

# Iterate through all 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palidrome(product) and product > largest_palidrome:
            largest_palidrome = product

#save the result to a file
with open('102-result', 'w') as file:
    file.write(str(largest_palidrome))
