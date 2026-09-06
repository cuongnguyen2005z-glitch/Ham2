#include <iostream>
using namespace std;

double cong(double a, double b)
{
    return a + b;
}

double tru(double a, double b)
{
    return a - b;
}

double nhan(double a, double b)
{
    return a * b;
}

double chia(double a, double b)
{
    return a / b;
}

int main()
{
    double a, b;
    int luaChon;

    cout << "Nhap so thu nhat: ";
    cin >> a;

    cout << "Nhap so thu hai: ";
    cin >> b;

    cout << "1. Cong" << endl;
    cout << "2. Tru" << endl;
    cout << "3. Nhan" << endl;
    cout << "4. Chia" << endl;

    cout << "Chon phep tinh: ";
    cin >> luaChon;

    switch (luaChon)
    {
        case 1:
            cout << "Ket qua = " << cong(a, b);
            break;

        case 2:
            cout << "Ket qua = " << tru(a, b);
            break;

        case 3:
            cout << "Ket qua = " << nhan(a, b);
            break;

        case 4:
            if (b != 0)
                cout << "Ket qua = " << chia(a, b);
            else
                cout << "Khong the chia cho 0!";
            break;

        default:
            cout << "Lua chon khong hop le!";
    }

    return 0;
}