#include <iostream>
using namespace std;

int main()
{
    int a = 33;
    int b = 11;
    int c = 7;

    cout << "Variables:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nArithmetic operators ( +, -, *, /, % )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nCompound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a += b -> a = " << (a += b) << endl;
    cout << "b -= 5 -> b = " << (b -= 5) << endl;
    cout << "a /= b -> a = " << (a /= b) << endl;
    cout << "a *= b -> a = " << (a *= b) << endl;

    cout << "\nIncrement and decrement (++, --)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "(a = ++a) -> " << (a = ++a) << endl;
    cout << "(a = a++) -> " << (a = a++) << endl;
    cout << "(a = --a) -> " << (a = --a) << endl;
    cout << "(a = a--) -> " << (a = a--) << endl;

    cout << "\nRelational and comparison operators ( ==, !=, >, <, >=, <= )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a * b >= c -> " << (a * b >= c) << endl;
    cout << "b + 5 > c*a -> " << (b + 5 > c * a) << endl;

    cout << "\nLogical operators ( !, &&, || )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "!(a == b) = " << !(a == b) << endl;
    cout << "!(a <= b) = " << !(a <= b) << endl;
    cout << "!true = " << !true << endl;
    cout << "!false = " << !false << endl;
    cout << "( (5 == 5) && (3 > 6) ) = " << ( (5 == 5) && (3 > 6) ) << endl;
    cout << "( (5 == 5) || (3 > 6) ) = " << ( (5 == 5) || (3 > 6) ) << endl;

    cout << "\nConditional ternary operator ( ? )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "7==5 ? 4 : 3 -> " << (7==5 ? 4 : 3)  << endl;
    cout << "7==5+2 ? 4 : 3 -> " << (7==5+2 ? 4 : 3) << endl;
    cout << "5>3 ? a : b -> " << (5>3 ? a : b) << endl;
    cout << "a>b ? a : b -> " << (a>b ? a : b) << endl;

    cout << "\nComma operator ( , )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a = (b=3, b+2) -> a = " << (a = (b=3, b+2)) << endl;
    
    cout << "\nBitwise operators ( &, |, ^, ~, <<, >> )" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~b = " << ~b << endl;
    cout << "a << b = " << (a << b) << endl;
    cout << "a >> b = " << (a >> b) << endl;

    cout << "\nExplicit type casting operator" << endl;
    int i;
    float f = 3.14;
    cout << "int i;" << endl;
    cout << "float f = 3.14;" << endl;
    cout << "i = (int) f -> i = " << (int) f << endl;

    cout << "\nsizeof - returns the size in bytes of that type or object" << endl;
    cout << "x = sizeof (f) -> x = " << sizeof (f) << endl;
}
