#include <iostream>
using namespace std;

void tinhMinMax(int a[], int n, int &min, int &max)
{
    min = a[0];
    max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }

        if (a[i] > max)
        {
            max = a[i];
        }
    }
}

int main()
{
    int a[] = {5, 2, 9, 1, 7};
    int n = 5;

    int min, max;

    tinhMinMax(a, n, min, max);

    cout << "Gia tri nho nhat: " << min << endl;
    cout << "Gia tri lon nhat: " << max << endl;

    return 0;
}