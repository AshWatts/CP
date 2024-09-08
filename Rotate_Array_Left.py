def rotateLeft(d, arr):
    return arr[d:] + arr[:d]

if __name__ == '__main__':
    # Get input from the user
    first_multiple_input = input("Enter the length of the array and number of rotations: ").split()

    n = int(first_multiple_input[0])  # Length of the array (can be ignored)
    d = int(first_multiple_input[1])  # Number of left rotations

    # Get the array input
    arr = list(map(int, input("Enter the array elements: ").split()))

    # Get the result of the left rotation
    result = rotateLeft(d, arr)

    # Print the result to the terminal
    print(' '.join(map(str, result)))
