# Task - 2 
## Statement
Given an integer (T) and a collection of integer (I), find a sub-collection (M) that the sum (S) of M's elements is the largest among all subcollections of I and S <= T. I is not sorted, M is not required to be sorted. Not required to find M with the least number of elements. I and M might contain repetitive elements. If there’s no answer found set M to an empty vector and s to 0. 
Signature of the interface.


### prototype
void find_largest_sum(const uint32_t T, const std::vector<uint32_t> &I, vector<uint32_t>& M, uint32_t &S);


## Requierements
- Cmake (VERSION 3.17)
- Gtest
## How to compile
```sh
$ cmake .
$ make
```
### Important
To compile this project it is necessary to have the Gtest libraries installed
## How Run
```sh
$ ./test
```