#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << "x: " << x << ", y: " << y << endl;

    double m = 1.1, n = 2.2;
    swap(m, n);
    cout << "m: " << m << ", n: " << n << endl;

    return 0;
}
