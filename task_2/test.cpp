#include "find.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string>

uint32_t T;
std::vector<uint32_t> I;
std::vector<uint32_t> M;
std::vector<uint32_t> expect;
uint32_t S;
void readData(std::string file, int SIZE, std::vector<uint32_t> &I)
{
  I.clear();
  std::ifstream File(file);
  std::string line;
  while (std::getline(File, line))
  {
    std::stringstream lineStream(line);
    int value;
    while (lineStream >> value)
    {
      I.push_back(value);
    }
  }
}

TEST(AlgorithmTest, BaseCase)
{
  T = 11;
  readData("testFiles/baseTest", 7, I);
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(11, S);
  expect = {5, 6};
  EXPECT_EQ(expect, M);
}
TEST(AlgorithmTest, oneHundredElements)
{
  readData("testFiles/oneHundred", 100, I);
  M.clear();
  T = 758;
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(757, S);
  expect = {26, 54, 27, 31, 20, 88, 48, 9, 51, 72, 28, 76, 78, 6, 87, 56};
  EXPECT_EQ(expect, M);
}
TEST(AlgorithmTest, oneThousandElements)
{
  readData("testFiles/oneThousand", 100, I);
  M.clear();
  T = 9264;
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(9264, S);
  expect = {573, 331, 666, 822, 255, 730, 535, 369, 230, 705, 12, 964, 814, 787, 928, 59, 439, 45};
  EXPECT_EQ(expect, M);
}
TEST(AlgorithmTest, tenThousandElements)
{
  readData("testFiles/tenThousand", 100, I);
  M.clear();
  T = 73845;
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(73845, S);
  expect = {5589, 7866, 9311, 5288, 1711, 4228, 3161, 8246, 4811, 7058, 3831, 411, 4177, 8157};
  EXPECT_EQ(expect, M);
}
TEST(AlgorithmTest, oneHundredThousandElements)
{
  readData("testFiles/oneHundredThousand", 100, I);
  M.clear();
  T = 869463;
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(869463, S);
  expect = {35182, 53942, 31394, 38725, 19034, 513, 93071, 26533, 59012, 67002, 81137, 20071, 68349, 19985, 54016, 1449, 44534, 12020, 70566, 72928};
  EXPECT_EQ(expect, M);
}
TEST(AlgorithmTest, oneMillionElements)
{
  readData("testFiles/oneMillion", 100, I);
  M.clear();
  T = 5694032;
  find_largest_sum(T, I, M, S);
  EXPECT_EQ(5694032, S);
  expect = {891162, 330177, 552485, 795772, 846159, 381896, 215324, 749909, 104100, 179521, 25152, 622375};
  EXPECT_EQ(expect, M);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}