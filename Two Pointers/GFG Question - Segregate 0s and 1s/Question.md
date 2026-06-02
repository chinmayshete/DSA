# Segregate 0s and 1s

🔗 [GFG Problem Link](https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1)

## Difficulty

Easy

---

## Problem Statement

Given an array `arr[]` consisting of only `0`s and `1`s, modify the array **in-place** to segregate:

- all `0`s on the left side
- all `1`s on the right side

---

## Examples

### Example 1

```text
Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]

Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
```

Explanation:

```text
After segregation, all 0's are on the left
and all 1's are on the right.
```

---

### Example 2

```text
Input: arr[] = [1, 1]

Output: [1, 1]
```

Explanation:

```text
There are no 0s in the array,
so the array remains unchanged.
```

---

## Constraints

```text
1 ≤ arr.size() ≤ 10^5
0 ≤ arr[i] ≤ 1
```

---

## Approach: Two Pointer Technique

Since the array contains only `0`s and `1`s, we can use two pointers:

- `left` → starts from beginning
- `right` → starts from end

### Idea

- If `arr[left] == 0`
  - it is already in correct position
  - move `left++`

- If `arr[right] == 1`
  - it is already in correct position
  - move `right--`

- Otherwise
  - swap both elements

This ensures all `0`s move left and all `1`s move right.

---

## Algorithm

1. Initialize:
   - `left = 0`
   - `right = n - 1`

2. While `left < right`
   - If `arr[left] == 0`
     - increment `left`
   - Else if `arr[right] == 1`
     - decrement `right`
   - Else
     - swap `arr[left]` and `arr[right]`

---

## Dry Run

### Input

```cpp
arr = [0,1,0,1,0,0,1,1,1,0]
```

| Left | Right | Action |
| ----- | ------ | ------ |
| 0 | 9 | left++ |
| 1 | 9 | swap |
| 2 | 8 | left++ |
| 3 | 8 | right-- |
| 3 | 7 | right-- |
| 3 | 6 | right-- |
| 3 | 5 | swap |

Final Array:

```cpp
[0,0,0,0,0,1,1,1,1,1]
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

Each element is visited at most once.

---

### Space Complexity

```text
O(1)
```

No extra space is used.

---

## Key Observations

- Array contains only `0` and `1`
- Two pointers make the solution efficient
- In-place solution satisfies constant space requirement
- Better than counting + rewriting approach in interview scenarios
