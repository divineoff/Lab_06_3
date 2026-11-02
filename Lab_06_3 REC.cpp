#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int MaxEven(int* a, const int size, int i);

template <typename T>
T MaxEven(T* a, const int size, int i);

int main()
{
    const int n = 10;

    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "Masyv a: ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;

    cout << "Max el = " << MaxEven(a, n, 0) << endl;
    cout << "Max el<int> = " << MaxEven<int>(a, n, 0) << endl;

    return 0;
}

int MaxEven(int* a, const int size, int i)
{
    if (i >= size) {
        return -1;
    }

    int nextMax = MaxEven(a, size, i + 1);

    if (a[i] % 2 == 0) {
        if (nextMax == -1 || a[i] > nextMax) {
            return a[i];
        }
    }

    return nextMax;
}

template <typename T>
T MaxEven(T* a, const int size, int i)
{
    if (i >= size) 
        return -1;

    T nextMax = MaxEven(a, size, i + 1);

    if (a[i] % 2 == 0)
        if (nextMax == -1 || a[i] > nextMax) {
            return a[i];
        }

    return nextMax;
}