#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int larger = (a > b) ? a : b;
    cout << "Larger = " << larger;

    return 0;
}