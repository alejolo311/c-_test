#include "add.hpp"
#include <gtest/gtest.h>
TEST(bitwiseAdd, oneDigitAdd)
{
  EXPECT_EQ(4, add(2, 2));
  EXPECT_EQ(12, add(6, 6));
  EXPECT_EQ(15, add(8, 7));
  EXPECT_EQ(18, add(9, 9));
  EXPECT_EQ(9, add(5, 4));
}
TEST(bitwiseAdd, twoDigitAdd)
{
  EXPECT_EQ(44, add(22, 22));
  EXPECT_EQ(98, add(66, 32));
  EXPECT_EQ(120, add(21, 99));
  EXPECT_EQ(111, add(99, 12));
  EXPECT_EQ(91, add(26, 65));
}
TEST(bitwiseAdd, fiveDigitAdd)
{
  EXPECT_EQ(62681, add(27266, 35415));
  EXPECT_EQ(72184, add(26679, 45505));
  EXPECT_EQ(130184, add(43412, 86772));
  EXPECT_EQ(100357, add(76505, 23852));
}
TEST(bitwiseAdd, testLimit)
{
  EXPECT_EQ(2147483647, add(2147483647, 0));
}
TEST(bitwiseAdd, overflowTest)
{
  EXPECT_EQ(-1, add(2147483647, 1));
  EXPECT_EQ(-1, add(2147483647, 200));
  EXPECT_EQ(-1, add(2147483647, 300));
  EXPECT_EQ(-1, add(2147483647, 400));
  EXPECT_EQ(-1, add(2147483647, 500));
}
int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}