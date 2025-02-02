#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

bool isPrime(int number)
{
    if (number == 1)
        return false;

    for (int i = number; i > 1; i--)
    {
        if (number % i == 0 && number != i)
        {
            return false;
        }
    }

    return true;
}

cpp_int int factorial(int number) {
    int result = number;

    for (int i = number - 1; i > 1; i--) {
        result = result * i;
    }

    return result;
}

int main()
{
    int n, number;

    cin >> n;

    while (n--)
    {
        cin >> number;

        if (isPrime(number))
        {
            printf("%d! = %lld\n", number, factorial(number));
        }
    }
    return 0;
}