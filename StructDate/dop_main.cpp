#include <iostream>
#include <cmath>
using namespace std;

long long int print_1(const int n)
{
    long long var = 1;
    for(int i = 0; i<n; i++)
    {
        var=var*10 + 1;
    }
    return var;
}
int main()
{
    int N = 1;
    int max_N = 0;
    int number = 0;
    long long int a = 1;
    long long int b = 1;
    for(N = 1; N <= pow(10.0,6); N++)
    {
        if(!(N%2==0 || N%5==0))
        {
        long long int A = 1;
        for(int i = 2; i <= N; ++i)
        {
            A = (A * 10 + 1) % N;
            if(A==0)
            {
                a = print_1(i);
            }
            if(A==1)
            {
                b = print_1(i-1);
            }
            
            if(a % N==0  || b % N==0)
            {
                number = N;
                if(number > max_N)
                {
                    max_N = number;
                }
            }
        }
        }
    }
    cout << "Maximum N: " << max_N << std::flush;
    return 0;
}
