#include "solution.h"

void Solution::partitioning(std::vector<int> &inputs, int pivot)
{
  int last_index = inputs.size() - 1;
  std::swap(inputs[pivot], inputs[last_index]);

  int j = 0, i = -1;
  while(j <= last_index - 1)
  {
    if(inputs[j] < inputs[last_index])
    {
      i++;
      std::swap(inputs[j], inputs[i]);
    }
    j++;
  }
  std::swap(inputs[last_index], inputs[i + 1]);
}

