# 167. Two Sum II - Input Array Is Sorted

🔗 [LeetCode Problem](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

## Difficulty

Medium

---

## Problem Statement

Given a **1-indexed** array of integers `numbers` that is already sorted in **non-decreasing order**, find two numbers such that they add up to a specific `target` number.

Let these two numbers be:

- `numbers[index1]`
- `numbers[index2]`

Where:

```text
1 <= index1 < index2 <= numbers.length
```

Return the indices of the two numbers, **added by one**, as an integer array:

```cpp
[index1, index2]
```

You may not use the same element twice.

Your solution must use only **constant extra space**.

---

## Examples

### Example 1

```text
Input: numbers = [2,7,11,15], target = 9

Output: [1,2]
```

Explanation:

```text
2 + 7 = 9
```

So we return:

```text
[1,2]
```

---

### Example 2

```text
Input: numbers = [2,3,4], target = 6

Output: [1,3]
```

Explanation:

```text
2 + 4 = 6
```

---

### Example 3

```text
Input: numbers = [-1,0], target = -1

Output: [1,2]
```

Explanation:

```text
-1 + 0 = -1
```

---

## Constraints

```text
2 <= numbers.length <= 3 * 10^4
-1000 <= numbers[i] <= 1000
numbers is sorted in non-decreasing order.
-1000 <= target <= 1000
```

There is exactly one solution.

---

## Approach: Two Pointer Technique

Since the array is already sorted, we can efficiently solve the problem using two pointers.

### Idea

- Start one pointer from the beginning (`i`)
- Start another pointer from the end (`j`)
- Calculate the sum:
  - If sum equals target → return answer
  - If sum is greater than target → move right pointer left
  - If sum is smaller than target → move left pointer right

---

## Algorithm

1. Initialize:
   - `i = 0`
   - `j = n - 1`

2. While `i < j`
   - Compute `sum = numbers[i] + numbers[j]`
   - If `sum == target`
     - return `{i+1, j+1}`
   - Else if `sum > target`
     - decrement `j`
   - Else
     - increment `i`

---

## Dry Run

### Input

```cpp
numbers = [2,7,11,15]
target = 9
```

| i | j | numbers\[i] | numbers\[j] | sum | Action |
| --- | --- | --- | --- | --- | --- |
| 0 | 3 | 2 | 15 | 17 | j-- |
| 0 | 2 | 2 | 11 | 13 | j-- |
| 0 | 1 | 2 | 7 | 9 | Found |

Output:

```cpp
[1,2]
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

Each pointer moves at most once.

---

### Space Complexity

```text
O(1)
```

Only constant extra space is used.

---

## Key Observations

- Array is sorted → perfect use case for two pointers.
- Better than brute force `O(n²)`.
- No extra hashmap needed.
- Satisfies constant space requirement.
