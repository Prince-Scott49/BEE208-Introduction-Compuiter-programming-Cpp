#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    const double pi = 3.14159;

    cout << "Enter radius: ";
    cin >> r;

    double area = pi * pow(r, 2);
    cout << "Area = " << area << endl;

    return 0;
}