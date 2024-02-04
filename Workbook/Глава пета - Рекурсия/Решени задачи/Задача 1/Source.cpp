#include<iostream>

int Ack(int m, int n);

int Ack(int m, int n) {
  if(m == 0) {
    return n + 1;
  }
  if(n == 0) {
    return Ack(m - 1, 1);
  }
  return Ack(m - 1, Ack(m, n - 1) );
}

int main() {
  int m, n;
  std::cout << "Enter the values of M and N: ";
  std::cin >> m >> n;
  if(!std::cin) {
    throw std::runtime_error("Error! Invalid input!");
    return 1;
  }

  std::cout << "Ack(" << m << ", "<< n << ") = " << Ack(m, n) << std::endl;
  
  return 0;
}
  
