def find_max(arr):
    max_element = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]
    return max_element

# Example usage
array = [5, 2, 9, 1, 7]
max_value = find_max(array)
print("The maximum element in the array is:", max_value)