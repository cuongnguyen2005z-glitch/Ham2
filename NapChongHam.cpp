#include <iostream>
using namespace std;

// Nap chong: cung ten "tinhTong", khac SO LUONG tham so
int tinhTong(int a, int b) {
    return a + b;
}

int tinhTong(int a, int b, int c) {
    return a + b + c;
}

// Nap chong: cung ten, khac KIEU DU LIEU tham so
double tinhTong(double a, double b) {
    return a + b;
}

int main() {
    cout << "tinhTong(3, 5) = " << tinhTong(3, 5) << endl;
    cout << "tinhTong(3, 5, 7) = " << tinhTong(3, 5, 7) << endl;
    cout << "tinhTong(3.5, 2.5) = " << tinhTong(3.5, 2.5) << endl;
    return 0;
}