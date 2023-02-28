#include <iostream>
#include <cstring>
using namespace std;

bool isEqual(char *c1, char *c2) {
    int len1 = strlen(c1);
    int len2 = strlen(c2);
    if (len1 != len2) {
        return false;
    }
    for (int i = 0; i < len1; i++) {
        if (*(c1 + i) != *(c2 + i)) {
            return false;
        }
    }
    return true;
}

int main() {
    char c1[100];
    char c2[100];
    cout << "Enter first string: ";
    cin >> c1;
    cout << "Enter second string: ";
    cin >> c2;
    bool result = isEqual(c1, c2);
    if (result==true) {
        cout << "Both strings are equal" << endl;
    } else {
        cout << "Both strings are not equal" << endl;
    }
    return 0;
}
