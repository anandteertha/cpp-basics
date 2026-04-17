#include <iostream>

void addFive(int &value) { value += 5; }

int main() {
  int a = 10;
  int &ref_a = a;

  std::cout << "value of a: " << a << std::endl;
  std::cout << "value of ref_a: " << ref_a << std::endl;
  std::cout << "address of a: " << &a << std::endl;
  std::cout << "address of ref_a: " << &ref_a << std::endl;

  ref_a = 15;
  std::cout << "value of a after ref_a = 15: " << a << std::endl;

  a = 20;
  std::cout << "value of ref_a after a = 20: " << ref_a << std::endl;

  addFive(a);
  std::cout << "value of a after addFive(a): " << a << std::endl;
  std::cout << "value of ref_a after addFive(a): " << ref_a << std::endl;

  int arr[3] = {1, 2, 3};
  int &first = arr[0];
  int(&ref_arr)[3] = arr;

  std::cout << "first element before update: " << first << std::endl;
  first = 10;
  std::cout << "arr[0] after updating first: " << arr[0] << std::endl;

  ref_arr[1] = 20;
  std::cout << "array through ref_arr: ";
  for (int value : ref_arr) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  return 0;
}
