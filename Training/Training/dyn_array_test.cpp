#include "dyn_array.h"
#include <gtest/gtest.h>


TEST(DynArray, Equal)
{
  dyn_array<int> array{10, 2};
  EXPECT_EQ(array, array);
}

TEST(DynArray, NotEqual)
{
  dyn_array<int> array1{10, 2};
  dyn_array<int> array2{5, 2};
  EXPECT_NE(array1, array2);
}

TEST(DynArray, Less)
{
  dyn_array<int> array1{10, 2};
  dyn_array<int> array2{5, 2};
  EXPECT_LT(array1, array2);
}

TEST(DynArray, LessEqual)
{
  dyn_array<int> array1{10, 2};
  dyn_array<int> array2{5, 2};
  EXPECT_LE(array1, array2);
}

TEST(DynArray, Greater)
{
  dyn_array<int> array1{10, 2};
  dyn_array<int> array2{5, 2};
  EXPECT_GT(array2, array1);
}

TEST(DynArray, GreaterEqual)
{
  dyn_array<int> array1{10, 2};
  dyn_array<int> array2{5, 2};
  EXPECT_GE(array2, array1);
}
