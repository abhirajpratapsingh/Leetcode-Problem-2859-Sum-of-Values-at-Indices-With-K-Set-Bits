# Abhiraj Pratap Singh

# Intuition
The goal appears to be calculating the sum of elements in the array whose binary representation has exactly k set bits.

# Approach
The code iterates through the array nums. For each element, it counts the number of set bits in its binary representation and checks
if it is equal to k.
If true it adds the corresponding element to the sum. The result is the sum of elements whose binary representation has exactly k set bits.


# Complexity

-Time complexity:
O(n * log(maximum_value_in_nums)) - The code involves iterating through each element of nums and counting set bits in its binary representation. The count set bit operation takes O(log(maximum_value_in_nums)) time, and it is performed for each element.

-Space complexity:

O(1) - The code uses a constant amount of space regardless of the input size.
