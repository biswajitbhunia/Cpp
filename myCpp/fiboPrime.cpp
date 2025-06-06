// myCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
