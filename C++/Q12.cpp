#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 != 0 && num % 3 == 0)
        cout << "Number is odd and divisible by 3";
    else
        cout << "Condition not satisfied";

    return 0;
}