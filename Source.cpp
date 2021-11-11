//Lab 6.2 iter
//Кулик Олег ІК-11
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i] << ",";
}
void Naoborot(int* a, const int n)
{
    int tmp;
    for (int i = 0; i < n / 2; i++)
    {
        tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
}
int main()
{
    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];
    int Low;
    int High;
    cout << "Low = "; cin >> Low;
    cout << "High = "; cin >> High;

    Create(a, n, Low, High);
    cout << "a[" << n << "] = {";
    Print(a, n);
    cout << "}"; cout << endl;

    cout << "a[" << n << "] = {";
    Naoborot(a, n);
    Print(a, n);
    cout << "}"; cout << endl;


    return 0;
}

