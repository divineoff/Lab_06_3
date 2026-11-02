#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int MaxEven(int* a, const int size);

template <typename T>
T MaxEven(T* a, const int size); 

int main() 
{
    const int n = 10;

    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "Masyv a: ";
    for (int i = 0; i < n; i++) 
        cout << setw(4) << a[i];
    cout << endl;

    cout << "Max el = " << MaxEven(a, n) << endl;
	cout << "Max el<int> = " << MaxEven<int>(a, n) << endl;
    
    return 0;
}

int MaxEven(int* a, const int size)
{
    int max;
    int imax = -1;

    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0) {
            max = a[i];
            imax = i;
            break;
        }

    if (imax == -1){
        cerr << "none" << endl;
        return 0;
    }

    for (int i = imax + 1; i < size; i++)
        if (a[i] % 2 == 0 && a[i] > max) {
            max = a[i];
        }

    return max;
}
template <typename T>
T MaxEven(T* a, const int size)
{
	T max = 0;
	int imax = -1;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0) {
			max = a[i];
			imax = i;
			break;
		}
	if (imax == -1){
		cerr << "none" << endl;
		return 0;
	}
	for (int i = imax + 1; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > max)
			max = a[i];
	return max;
}