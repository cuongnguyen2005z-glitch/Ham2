#include <iostream>
using namespace std;

void nhapDiem(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

float tinhTrungBinh(float a[], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i];
    return tong / n;
}

string xepLoai(float diem)
{
    if (diem >= 8) return "Gioi";
    if (diem >= 6) return "Kha";
    if (diem >= 5) return "Trung binh";
    return "Yeu";
}
    
int main()
{
    int n;
    float a[100];

    cout << "Nhap n: ";
    cin >> n;
    nhapDiem(a, n);

    float tb = tinhTrungBinh(a, n);

    cout << "Diem trung binh: " << tb << endl;
    cout << "Xep loai: " << xepLoai(tb);

    return 0;
}