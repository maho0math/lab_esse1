#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int pointer = 0;
    int max_N = 0;
    int max_i = 0;

    long long int A = 1;
    for (N = 2; N < 1000000 && N % 4 != 0 && N % 5 != 0; N++)
    {
            for (int i = 2; i < N; i++)
            {
                A = (10 * A + 1) % N;
                if (A == 0)
                {
                    N = i;
                    pointer = i;
               
                }
                if (pointer > max_i && N > max_N)
                {
                    max_i = pointer;
                    max_N = N;
                }
            }
    }
    cout << max_N;
    return 0;
}
