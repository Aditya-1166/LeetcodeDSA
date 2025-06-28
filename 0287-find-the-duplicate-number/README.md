## Problem Description

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive, return the **duplicate number** in `nums`.

There is only **one repeated number**, but it can appear **two or more times**.

You **must not modify** the array (i.e., do not change the input array), and you must use only **constant extra space**.

### Examples

#### Example 1:
**Input:**  
`nums = [1,3,4,2,2]`  
**Output:**  
`2`

#### Example 2:
**Input:**  
`nums = [3,1,3,4,2]`  
**Output:**  
`3`

#### Example 3:
**Input:**  
`nums = [3,3,3,3,3]`  
**Output:**  
`3`

---

## Constraints

- `1 <= n <= 10^5`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- All the integers in `nums` appear only once **except for precisely one integer** which appears **two or more times**
