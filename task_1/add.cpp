#include "add.hpp"
/**
 * add
 * Description: add two numbers and check the possible overflow only using bit operators &, ^, <<
 * @return the result of the add or -1 in case of overflow
 */
int add(int a, int b)
{
  /* define the variables that i gonna use */
  int carry = 0;
  /* start the loop in the second num to add */
  while (b)
  {
    /* apply the & (AND) operator and save the result in the carry */
    carry = a & b;
    /* apply the ^ (XOR) operator and save the result in firtn num */
    a = a ^ b;
    /* do a bitwise operarion of 1 bit in carry and store*/
    b = carry << 1;
  }
  /* check if the result of the add is negative, is the result is negative that means that
  * the add cause overflow in the code.
  */
  if (a & (1 << 31))
    return (-1);
  return a;
}
