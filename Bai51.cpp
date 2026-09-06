#include <iostream>
using namespace std;

void tang(int n) {
    n = n + 1; // Truyền tham trị vào nên x không thay đổi
}
int main() {
    int x = 5;
    tang(x);
    cout << x;
}
// Kết quả x = 5