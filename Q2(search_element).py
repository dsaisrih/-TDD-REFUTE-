def user_input_linear_search_corrected():
    arr = input("Enter the elements of the array (space-separated): ")
    arr = list(map(int, arr.split()))  # Convert input strings to integers
    target = int(input("Enter the element to search for: "))
   
    for index, element in enumerate(arr):
        if element == target:
            return index, target  # Return both index and target
    return -1, target  # Return -1 and target if not found

# Example usage
result, target = user_input_linear_search_corrected()  # Unpack the returned values
if result != -1:
    print(f"Element {target} found at index {result}.")
else:
    print(f"Element {target} not found in the array.")
'''Test Cases:

Test Case 1: Input: 1 2 3 4 5 Target : 1 → Output: Element 1 found at index 0.
Test Case 2: Input: 10 20 30 40 50 Target : 30 → Output: Element 30 found at index 2.
Test Case 3: Input: 6 7 8 9 10 Target : 10 → Output: Element 10 found at index 4.
Test Case 4: Input: 11 12 13 14 15 Target : 7 → Output: Element 7 not found in the array '''

