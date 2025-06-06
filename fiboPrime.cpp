
#include <iostream>
using namespace std;
class FibonacciPrime
{
private:
    int terms;

    // Check if a number is prime
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; ++i)
            if (num % i == 0)
                return false;
        return true;
    }

public:
    // Constructor
    FibonacciPrime(int n) { terms = n; }

    // Function to display Fibonacci series and indicate primes
    void displaySeries()
    {
        int a = 0, b = 1, next;

        cout << "Fibonacci series with prime numbers marked:\n";

        for (int i = 1; i <= terms; ++i)
        {
            cout << a;
            if (isPrime(a))
                cout << " (prime)";
            cout << endl;

            next = a + b;
            a = b;
            b = next;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    FibonacciPrime fp(n);
    fp.displaySeries();

    return 0;
}