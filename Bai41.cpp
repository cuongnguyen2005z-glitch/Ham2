#include <iostream>
using namespace std;

int x = 10; // Biến toàn cục
void thayDoi() {
    int x = 20; // Biến cục bộ
    cout << x << endl;
}
int main() {
    thayDoi();
    cout << x << endl;
}