#include <iostream>
int main() {
  int a = 10;
  std::cout << "value of a: " << a << std::endl;
  std::cout << "address of a: " << &a << std::endl;

  int *ptr_a = &a;
  std::cout << "ptr_a value: " << ptr_a << std::endl;
  std::cout << "derefencing ptr_a value: " << *ptr_a << std::endl;

  *ptr_a = *ptr_a + 1;
  //   why does *ptr_a++ not work?
  std::cout << "value of a after *ptr_a++: " << a << std::endl;
  std::cout << "dereferencing ptr_a value after increment: " << *ptr_a
            << std::endl;

  int *ptr_a_dash = &a;
  std::cout << "ptr_a_dash value: " << ptr_a_dash << std::endl;
  std::cout << "derefencing ptr_a_dash value: " << *ptr_a_dash << std::endl;
  return 0;
}