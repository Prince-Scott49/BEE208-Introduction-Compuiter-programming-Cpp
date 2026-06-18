#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 != 0)
        cout << "Odd number";
    else
        cout << "Even number";

    return 0;
}