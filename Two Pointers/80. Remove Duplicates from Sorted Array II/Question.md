# 80. Remove Duplicates from Sorted Array II

🔗 [LeetCode Problem](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

## Difficulty

Medium

---

## Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

Return `k` after placing the final result in the first `k` slots of `nums`.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

### Custom Judge

The judge will test your solution with the following code:

```cpp
int[] nums = [...]; // Input array  
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Example 1

```text
Input: nums = [1,1,1,2,2,3]

Output: 5, nums = [1,1,2,2,3,_]

Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

## Example 2

```text
Input: nums = [0,0,1,1,1,1,2,3,3]

Output: 7, nums = [0,0,1,1,2,3,3,_,_]

Explanation: Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

## Constraints

```text
1 <= nums.length <= 3 * 10^4
-10^4 <= nums[i] <= 10^4
nums is sorted in non-decreasing order.
```

## Approach: Two Pointer Technique

### Idea

Initialize two pointers, `start` and `end`, both at index 2.
Iterate through the array using the `end` pointer.
If `nums[start - 2]` is not equal to `nums[end]`, then copy `nums[end]` to `nums[start]` and increment `start`.
Increment `end` in each iteration.
Finally, return `start`.

## Algorithm

1. Initialize:
   - `start = 2`
   - `end = 2`

2. While `end < n`:
   - If `nums[start - 2] != nums[end]`:
     - `nums[start] = nums[end]`
     - `start++`
   - `end++`

3. Return `start`

## Dry Run

Input: `nums = [1,1,1,2,2,3]`

| start | end | nums[start-2] | nums[end] | Action | 
| --- | --- | --- | --- | --- |
| 2 | 2 | 1 | 1 | No change |
| 2 | 3 | 1 | 2 | nums[2] = 2, start++ |
| 3 | 4 | 1 | 2 | No change |
| 3 | 5 | 2 | 3 | nums[3] = 3, start++ |

Output:

```text
5
```

## Complexity Analysis

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```
