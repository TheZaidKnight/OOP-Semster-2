#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLUMNS = 4;

void traverseArray(int arr[][COLUMNS], int row, int col) {
  if (row == ROWS) {
    return;
  }
  if (col == COLUMNS) {
    traverseArray(arr, row + 1, 0);
    return;
  }
  cout << arr[row][col] << " ";
  traverseArray(arr, row, col + 1);
}

int main() {
  int arr[ROWS][COLUMNS] = {{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};
  traverseArray(arr, 0, 0);
  return 0;
}
