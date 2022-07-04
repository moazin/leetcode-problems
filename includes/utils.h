#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <vector>
#include <iostream>

template<typename T>
std::ostream& operator<< (std::ostream& outs, const std::vector<T>& array)
{
  outs << "[";
  for(int i = 0; i < array.size() - 1; i++)
    outs << array[i] << ", ";
  outs << array[array.size() - 1];
  outs << "]";
  return outs;
}

template<typename T>
void printList(const std::string& label, const std::vector<T> &lst)
{
  std::cout << label << " => " << lst << std::endl;
}

#endif
