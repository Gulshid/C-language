#include <iostream>
using namespace std;

void fahrenheitToCelsius(float* fahrenheit, float* celsius) 
{
    *celsius = (*fahrenheit - 32) * 5.0 / 9.0;
}

int main()
 {
    float fahrenheit, celsius;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    fahrenheitToCelsius(&fahrenheit, &celsius);

    cout << "Temperature in Celsius: " << celsius << endl;

}
