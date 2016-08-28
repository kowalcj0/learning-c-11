#include <iostream>
#include <cmath>
using namespace std;

// compile:
// c++ -std=c++11 variables.cpp -o variables

int main()
{
    // declare variables
    int a, b;

    // declare and initialize vars
    int c, d = 2;

    // constructor initialization
    int e (2);

    // uniform initialization (introduced in c++11)
    int f {3};

    // Type deduction: auto and decltype
    // The compiler can figure out what the type of the variable is
    // automatically by the initializer. 
    auto g = f;
    g = 4;

    // Type deduction for variables that are not initialized
    decltype(g) h;
    h = 120;

    // assign values
    a = 0;
    b = 0;

    cout << "a + b = " << a + b << endl;
    cout << "c * d = " << c * d << endl;
    cout << "e ^ f = " << pow(e, f) << endl;
    cout << "h / g = " << h / g << endl;


    // STRINGS
    string z = "String: regular initialization";
    string y ("String: constructor initialization");
    string x {"String: uniform initialization (introduced in c++11)"};

    cout << z << endl;
    cout << y << endl;
    cout << x << endl;
}
