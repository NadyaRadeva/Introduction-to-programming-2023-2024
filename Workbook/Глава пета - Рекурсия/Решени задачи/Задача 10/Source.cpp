#include<iostream>

int sumDig(int n, int k);

int sumDig(int n, int k) {
  if(n == 0) {
    return 0;
  }
  return sumDig(n/k, k) + n%k;
}

int main() {
  unsigned int n;
  int k;
  std::cout << "Enter your number: ";
  std::cin >> n;
  if (!std::cin || n < 0) {
	throw std::runtime_error("Error! Invalid input!");
	return 1;
  }

  std::cout << "Enter the base of your numeral system: ";
  std::cin >> k;
  if (!std::cin || k < 1) {
	  throw std::runtime_error("Error! Invalid input!");
	  return 1;
  }

  std::cout << "The number of the digits of " << n << " in " << k << "-numeral system: " << countDig(n, k) << std::endl;

  return 0;
}
