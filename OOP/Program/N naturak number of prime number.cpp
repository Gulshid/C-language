#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num)
{
    if (num <= 1) return false; 
    if (num == 2) return true;   
    if (num % 2 == 0) return false;  

   
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: " << endl;
    
    for (int i = 1; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

