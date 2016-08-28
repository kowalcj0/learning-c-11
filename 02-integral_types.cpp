#include <iostream>
#include <limits>
 
// SRC: https://gist.github.com/jatinganhotra/4368027

using namespace std;
 
int main()
{
    cout << "Size of size_t = " << sizeof(std::size_t) << endl << endl;
 
    cout << "Minimum value for bool: " << numeric_limits<bool>::min() << endl;
    cout << "Maximum value for bool: " << numeric_limits<bool>::max() << endl;
    cout << "bool is signed: " << numeric_limits<bool>::is_signed << endl;
    cout << "Non-sign bits in bool: " << numeric_limits<bool>::digits << endl;
    cout << "bool has infinity: " << numeric_limits<bool>::has_infinity << endl << endl;
    
    cout << "Minimum value for char: " << numeric_limits<char>::min() << endl;
    cout << "Maximum value for char: " << numeric_limits<char>::max() << endl;
    cout << "char is signed: " << numeric_limits<char>::is_signed << endl;
    cout << "Non-sign bits in char: " << numeric_limits<char>::digits << endl;
    cout << "char has infinity: " << numeric_limits<char>::has_infinity << endl << endl;
    
    cout << "Minimum value for signed char: " << numeric_limits<signed char>::min() << endl;
    cout << "Maximum value for signed char: " << numeric_limits<signed char>::max() << endl;
    cout << "signed char is signed: " << numeric_limits<signed char>::is_signed << endl;
    cout << "Non-sign bits in signed char: " << numeric_limits<signed char>::digits << endl;
    cout << "signed char has infinity: " << numeric_limits<signed char>::has_infinity << endl << endl;
    
    cout << "Minimum value for unsigned char: " << numeric_limits<unsigned char>::min() << endl;
    cout << "Maximum value for unsigned char: " << numeric_limits<unsigned char>::max() << endl;
    cout << "unsigned char is signed: " << numeric_limits<unsigned char>::is_signed << endl;
    cout << "Non-sign bits in unsigned char: " << numeric_limits<unsigned char>::digits << endl;
    cout << "unsigned char has infinity: " << numeric_limits<unsigned char>::has_infinity << endl << endl;
    
    cout << "Minimum value for wchar_t: " << numeric_limits<wchar_t>::min() << endl;
    cout << "Maximum value for wchar_t: " << numeric_limits<wchar_t>::max() << endl;
    cout << "wchar_t is signed: " << numeric_limits<wchar_t>::is_signed << endl;
    cout << "Non-sign bits in wchar_t: " << numeric_limits<wchar_t>::digits << endl;
    cout << "wchar_t has infinity: " << numeric_limits<wchar_t>::has_infinity << endl << endl;

    cout << "Minimum value for short: " << numeric_limits<short>::min() << endl;
    cout << "Maximum value for short: " << numeric_limits<short>::max() << endl;
    cout << "short is signed: " << numeric_limits<short>::is_signed << endl;
    cout << "Non-sign bits in short: " << numeric_limits<short>::digits << endl;
    cout << "short has infinity: " << numeric_limits<short>::has_infinity << endl << endl;
    
    cout << "Minimum value for unsigned short: " << numeric_limits<unsigned short>::min() << endl;
    cout << "Maximum value for unsigned short: " << numeric_limits<unsigned short>::max() << endl;
    cout << "unsigned short is signed: " << numeric_limits<unsigned short>::is_signed << endl;
    cout << "Non-sign bits in unsigned short: " << numeric_limits<unsigned short>::digits << endl;
    cout << "unsigned short has infinity: " << numeric_limits<unsigned short>::has_infinity << endl << endl;
    
    cout << "Minimum value for int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum value for int: " << numeric_limits<int>::max() << endl;
    cout << "int is signed: " << numeric_limits<int>::is_signed << endl;
    cout << "Non-sign bits in int: " << numeric_limits<int>::digits << endl;
    cout << "int has infinity: " << numeric_limits<int>::has_infinity << endl << endl;
    
    cout << "Minimum value for unsigned int: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Maximum value for unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "unsigned int is signed: " << numeric_limits<unsigned int>::is_signed << endl;
    cout << "Non-sign bits in unsigned int: " << numeric_limits<unsigned int>::digits << endl;
    cout << "unsigned int has infinity: " << numeric_limits<unsigned int>::has_infinity << endl << endl;
 
    cout << "Minimum value for long: " << numeric_limits<long>::min() << endl;
    cout << "Maximum value for long: " << numeric_limits<long>::max() << endl;
    cout << "long is signed: " << numeric_limits<long>::is_signed << endl;
    cout << "Non-sign bits in long: " << numeric_limits<long>::digits << endl;
    cout << "long has infinity: " << numeric_limits<long>::has_infinity << endl << endl;
    
    cout << "Minimum value for unsigned long: " << numeric_limits<unsigned long>::min() << endl;
    cout << "Maximum value for unsigned long: " << numeric_limits<unsigned long>::max() << endl;
    cout << "unsigned long is signed: " << numeric_limits<unsigned long>::is_signed << endl;
    cout << "Non-sign bits in unsigned long: " << numeric_limits<unsigned long>::digits << endl;
    cout << "unsigned long has infinity: " << numeric_limits<unsigned long>::has_infinity << endl << endl;
    
    cout << "Minimum value for long long: " << numeric_limits<long long>::min() << endl;
    cout << "Maximum value for long long: " << numeric_limits<long long>::max() << endl;
    cout << "long long is signed: " << numeric_limits<long long>::is_signed << endl;
    cout << "Non-sign bits in long long: " << numeric_limits<long long>::digits << endl;
    cout << "long long has infinity: " << numeric_limits<long long>::has_infinity << endl << endl;

    cout << "Minimum value for unsigned long long: " << numeric_limits<unsigned long long>::min() << endl;
    cout << "Maximum value for unsigned long long: " << numeric_limits<unsigned long long>::max() << endl;
    cout << "unsigned long long is signed: " << numeric_limits<unsigned long long>::is_signed << endl;
    cout << "Non-sign bits in unsigned long long: " << numeric_limits<unsigned long long>::digits << endl;
    cout << "unsigned long long has infinity: " << numeric_limits<unsigned long long>::has_infinity << endl << endl;
    
    cout << "Minimum value for float: " << numeric_limits<float>::min() << endl;
    cout << "Maximum value for float: " << numeric_limits<float>::max() << endl;
    cout << "float is signed: " << numeric_limits<float>::is_signed << endl;
    cout << "Non-sign bits in float: " << numeric_limits<float>::digits << endl;
    cout << "float has infinity: " << numeric_limits<float>::has_infinity << endl << endl;
    
    cout << "Minimum value for double: " << numeric_limits<double>::min() << endl;
    cout << "Maximum value for double: " << numeric_limits<double>::max() << endl;
    cout << "double is signed: " << numeric_limits<double>::is_signed << endl;
    cout << "Non-sign bits in double: " << numeric_limits<double>::digits << endl;
    cout << "double has infinity: " << numeric_limits<double>::has_infinity << endl << endl;
    
    cout << "Minimum value for long double: " << numeric_limits<long double>::min() << endl;
    cout << "Maximum value for long double: " << numeric_limits<long double>::max() << endl;
    cout << "long double is signed: " << numeric_limits<long double>::is_signed << endl;
    cout << "Non-sign bits in long double: " << numeric_limits<long double>::digits << endl;
    cout << "long double has infinity: " << numeric_limits<long double>::has_infinity << endl << endl;
    
    return 0;
}
