#include <iostream>
#include <vector>
#include <map>

#include <utils.h>

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


int main(int argc, char **argv)
{
  auto printSolution = [](const std::vector<int>& nums, const int &target){
    printList("Array", nums);
    std::cout << "Target => " << target << std::endl;
    printList("Solution", twoSum(nums, target));
  };

  printSolution({2, 7, 11, 15}, 9);
  printSolution({3, 2, 4}, 6);
  printSolution({3, 3}, 6);
  return 0;
}
