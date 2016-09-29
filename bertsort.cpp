#include "bertsort.hpp"

#include <vector>
#include <iostream>

int main()
{
  int vals[] = { 3, 2, 1 };
  std::vector<int> v (vals, vals + 3);
  bertsort(v);
  std::cout << v[0] << ", " << v[1] << ", " << v[2] << std::endl;
  return 0;
}
