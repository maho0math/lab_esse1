#include <iostream>
#include <cmath>
using namespace std;

void print_1(const int n)
{
    for (int i = 0; i < n; i++)
        cout << 1;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Трифонов Матвей Михайлович \t" << "Группа: 090301 - ПОВа - о23\t" << "Курс: 1" << endl;
    int N;
    cin >> N;
    if (N < 0)
    {
        cout << "NO";
        return 0;
    }
    if (N >= 1)
    {
        if (N > pow(10, 6))
        {
            cout << "NO";
        }
        if (N <= pow(10, 6))
        {
            if (N % 2 == 0)
            {
                cout << "NO";
                return 0;
            }
            if (N % 5 == 0)
            {
                cout << "NO";
                return 0;
            }

            if (N == 1)
            {
                cout << 1;
                return 0;
            }

            long int A = 1;
            for (long int i = 2; i <= N; i++)
            {
                A = (A * 10 + 1) % N;
                if (A == 0)
                {
                    print_1(i);
                    return 0;
                }
                if (A == 1)
                {
                    print_1(i - 1);
                    return 0;
                }

            }
        }
    }
}
