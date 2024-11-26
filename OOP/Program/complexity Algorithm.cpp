#include <iostream>
using namespace std;

int sumOfNumbers(int n)
{
    int sum = 0; // Constant space for sum
    for (int i = 1; i <= n; i++)
    {
        sum += i; // Linear time complexity
    }
    return sum;
}

int main() 
{
    int n = 100;
    cout << "Sum of first " << n << " numbers is " << sumOfNumbers(n) << endl;
    return 0;
}

