#include <iostream>
using namespace std;

void tang1(int n)
{
    n = n + 1;
}

void tang2(int &n)
{
    n = n + 1;
}

int main()
{
    int x = 5;
    int y = 5;

    tang1(x);
    tang2(y);

    cout << "Sau khi goi tang1: x = " << x << endl;
    cout << "Sau khi goi tang2: y = " << y << endl;

    return 0;
}