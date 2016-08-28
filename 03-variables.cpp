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
    string i = "String: regular initialization";
    string j ("String: constructor initialization");
    string k {"String: uniform initialization (introduced in c++11)"};
    string l = "String expressed \
                in 2 lines";
    string m = R"(First line.\nSecond line.\nEnd of message.\n)"; // RAW string

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;
    cout << m << endl;

    // Other literals
    bool n = true;
    bool o = false;
    int* p = nullptr;

    cout << n << endl;
    cout << o << endl;
    cout << p << endl;
}
