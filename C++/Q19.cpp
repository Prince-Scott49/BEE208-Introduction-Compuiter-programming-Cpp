#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int decimal = 0;

    for(char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal = " << decimal << endl;
    cout << "Hexadecimal = " << hex << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;

    return 0;
}