#include <iostream>
using namespace std;

void hoanDoi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    cout << "Truoc khi hoan doi:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    hoanDoi(x, y);

    cout << "Sau khi hoan doi:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}