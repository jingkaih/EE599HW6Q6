#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PartitionShould, Work) {
  Solution solution ;
  std::vector<int> actual = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  std::vector<int> expected = {6, 5, 2, 3, 7, 9, 14, 11, 10, 12};
  solution.partitioning(actual, 1);
  EXPECT_EQ(expected, actual);
}