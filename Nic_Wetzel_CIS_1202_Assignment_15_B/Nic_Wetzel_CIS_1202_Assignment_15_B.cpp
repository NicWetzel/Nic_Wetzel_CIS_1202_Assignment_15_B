// Nic Wetzel
// CIS 1202 501
// December 2, 2021

#include <iostream>

using namespace std;
// Defining template to use the half function
template <typename T>

// Function to find half of each value passed
T half(T value)
{
    T result;
    result = value / 2;

    return result;
}


int main()
{
    // Variables to send into the half function template
    int a = 7.0;
    float b = 5.0f;
    double c = 3;

    // Cout statements that show the number and what half of that number is
    cout << "Half value of " << a << ": " << half(a) << endl;
    cout << "Half value of " << b << ": " << half(b) << endl;
    cout << "Half value of " << c << ": " << half(c) << endl;
}
