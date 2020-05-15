#include "find.hpp"
/**
 * find_largest_sum
 * Description: find the largest sum of an subarray, in this case was
 * use the method sliding windows that method give us a time complexity of O(n) 
 * @return no return this is a void function work directly with references
 */
void find_largest_sum(const uint32_t T, const std::vector<uint32_t> &I, std::vector<uint32_t> &M, uint32_t &S)
{
  /* define the variables that i gonna use in the code */
  int actual = I.at(0);
  int _max = 0;
  int begin = 0, end;
  int finalBegin, finalEnd;
  int i;
  /* start the loop to do a single traversal in the vector */
  for (end = 1; end < I.size(); end++)
  {
    /* verify if the actual sum i less than T*/
    if (actual <= T)
    {
      /* if is necessary re asign the max*/
      _max = std::max(_max, actual);
      /*store the indexes of the subarray with the max sum*/
      if (_max == actual)
      {
        finalBegin = begin;
        finalEnd = end - 1;
      }
    }
    /*iterate the init of the vector in case the sum of the next element is bigger than T*/
    while (actual + I.at(end) > T && begin < end)
    {
      actual -= I.at(begin);
      begin++;
    }
    actual += I.at(end);
  }
  /* verify if the last subarray sum is less than T*/
  if (actual <= T)
  {
    /* if is necessary re asign the max*/
    _max = std::max(_max, actual);
    /*store the indexes of the subarray with the max sum*/
    if (_max == actual)
    {
      finalBegin = begin;
      finalEnd = end - 1;
    }
  }
  /* use thes store indexes to generate the response vector */
  for (i = finalBegin; i <= finalEnd; i++)
    M.push_back(I.at(i));
  /* asign the max sum to S */
  S = _max;
}
