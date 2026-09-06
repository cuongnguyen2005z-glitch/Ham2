#include <iostream>
using namespace std;

// Ham kiem tra so nguyen to
bool laSoNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void inDanhSachNguyenTo(int a, int b)
{
    cout << "Cac so nguyen to tu " << a << " den " << b << " la: ";

    for (int i = a; i <= b; i++)
    {
        if (laSoNguyenTo(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    inDanhSachNguyenTo(a, b);

    return 0;
}