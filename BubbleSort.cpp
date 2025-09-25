arr = [5, 1, 4, 2, 8]
n = len(arr)

for i in range(n):
    for j in range(0, n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap

print("Sorted array:", arr)
