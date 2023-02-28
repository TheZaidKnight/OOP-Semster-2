#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n) {
  if (n <= 0) {
    return;
  }
  printFibonacci(n - 1);
  cout << fibonacci(n) << " ";
}

int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "The Fibonacci series is: ";
  printFibonacci(n);
  cout << endl;
  return 0;
}