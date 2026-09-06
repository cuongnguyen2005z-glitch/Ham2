#include <iostream>
using namespace std;

int rutTien(int soDu, int soTien)
{
    return soDu - soTien;
}

int napTien(int soDu, int soTien)
{
    return soDu + soTien;
}

int main()
{
    int soDu = 1000;

    soDu = rutTien(soDu, 200);
    cout << "So du sau khi rut: " << soDu << endl;

    soDu = napTien(soDu, 500);
    cout << "So du sau khi nap: " << soDu << endl;

    return 0;
}
// Biến soDu là biến toàn cục, nên tất cả các hàm trong chương trình đều có thể truy cập và thay đổi nó.
// Khi chương trình nhỏ thì có vẻ đơn giản, nhưng khi chương trình lớn lên sẽ dễ xảy ra lỗi vì:
// Hàm rutTien() có thể tự ý thay đổi soDu.
// Hàm napTien() cũng thay đổi soDu.
// Nếu có thêm nhiều hàm khác, rất khó biết hàm nào đã làm thay đổi số dư.
// Có thể vô tình thay đổi soDu sai giá trị mà không phát hiện ngay.
// Việc kiểm tra và sửa lỗi chương trình trở nên khó khăn.
