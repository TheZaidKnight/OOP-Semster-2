#include <iostream>
using namespace std;

void reverse(char str[], int index, int size) {
  if (index == size) {
    return;
  }
  reverse(str, index + 1, size);
  cout << str[index];
}

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  int size = 100;
  cout << "The reversed string is: ";
  reverse(str, 0, size - 1);
  cout << endl;
  return 0;
}
