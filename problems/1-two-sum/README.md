# 1-Two-Sum

Given an array of numbers and a target, return the indices of two elements such that they sum up to *target*. There is only one correct solution and the two indices can't be same.

## Solution

The problem is simple to solve, just iterate through the whole array element by element and maintain a hashmap. If the (*target*-*current_element*) is in the hashmap, then *current_element* and that hashmap entry forms the solution pair, if that's not the case, just add the *current_element* to the hashmap.

```cpp
std::vector<int> twoSum(const std::vector<int> &nums, const int &target)
{
  std::map<int, int> dict;
  for(int i = 0; i < nums.size(); i++)
  {
    auto other_elem = dict.find(target - nums[i]);
    if (other_elem != dict.end())
      return std::vector<int>{other_elem->second, i};
    else
      dict[nums[i]] = i;
  }
  return std::vector<int>{};
}
```

Time complexity is `O(N)` while space complexity is also `O(N)`.
