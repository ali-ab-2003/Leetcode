# Merge Sorted Arrays

This C++ program merges two sorted arrays into a single sorted array in-place. The merge function in the Solution class efficiently combines the elements of two arrays while maintaining their sorted order.

## How to Use

1. Clone the repository:

```Bash
git clone https://github.com/your-username/Leetcode.git
```

2. Navigate to the project directory:

```Bash
    # Navigate to the Leetcode directory
    cd Leetcode

    # Navigate to the Search Insert folder
    cd Merge Sorted Array
```

3. Compile the program:

```Bash
g++ merge_sorted_array.cpp -o merge_sorted_arrays
```


4. Run the executable:

```Bash
./merge_sorted_arrays
```


## Example Usage

The `main` function in `merge_sorted_array.cpp` demonstrates the usage of the `merge` method.

## Function Description

The merge function takes the following arguments:

nums1: The first sorted array, containing m elements.
m: The number of valid elements in nums1.
nums2: The second sorted array, containing n elements.
n: The number of valid elements in nums2.

## Algorithm

Create an empty temporary vector merged to store the combined elements.
Initialize two indices, i and j, to 0 to track the current positions in nums1 and nums2, respectively.
Iterate through both arrays simultaneously:
Compare the elements at nums1[i] and nums2[j].
Append the smaller element to merged and increment the corresponding index.
Append any remaining elements from nums1 or nums2 to merged.
Assign the contents of merged back to nums1 to achieve in-place merging.