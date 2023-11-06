#bubble sort
#!/bin/bash

# Define an array of integers
arr=(64 34 25 12 22 11 90)

# Function to perform a bubble sort
bubbleSort() {
    local n=${#arr[@]}
    for ((i = 0; i < n-1; i++)); do
        for ((j = 0; j < n-i-1; j++)); do
            if ((arr[j] > arr[j+1])); then
                # Swap arr[j] and arr[j+1]
                temp=${arr[j]}
                arr[j]=${arr[j+1]}
                arr[j+1]=$temp
            fi
        done
    done
}

# Call the bubbleSort function to sort the array
bubbleSort

# Print the sorted array
echo "Sorted Array: ${arr[*]}"
