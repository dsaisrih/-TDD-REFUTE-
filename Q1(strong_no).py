def factorial(n):
    if n < 0:
        return 1  # This case should not happen, but we can return 1 for safety
    if n == 0 or n == 1:
        return 1
    fact = 1
    for i in range(2, n + 1):
        fact *= i
    return fact
def is_strong_number(num):
    original_num = num
    sum_of_factorials = 0
    while num > 0:
        digit = num % 10
        sum_of_factorials += factorial(digit)
        num //= 10
    return sum_of_factorials == original_num  # Corrected to '=='
def main():
    number = int(input("Enter a number: "))
    if number < 0:
        print("Negative numbers cannot be strong numbers.")
        return
    if is_strong_number(number):
        print(f"{number} is a Strong Number.")
    else:
        print(f"{number} is not a Strong Number.")
if __name__ == "__main__":
    main()

'''Test Cases:

Test Case 1: Input: 145 → Output: 145 is a Strong Number.
Test Case 2: Input: 123 → Output: 123 is not a Strong Number.
Test Case 3: Input: -5 → Output: Negative numbers cannot be strong numbers.'''