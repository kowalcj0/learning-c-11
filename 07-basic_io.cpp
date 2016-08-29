#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string str2;
    long long int number;

    cout << "Hi\n";
    cout << "Please enter a number: (ps. max accepted val is 9223372036854775807)\n";
    cin >> number;
    cout << "How amazing! You've entered: " << number << endl;

    cout << "\nPlease enter a string: (handled by standard cin)\n";
    cin >> str;
    cout << "How amazing! You've entered: " << str << endl;
    cin.clear();
    cin.sync();

    cout << "\nNow, please enter a string: (handled by getline)\n" << endl;
    getline (cin, str2);
    cout << "How amazing! You've entered: " << str2 << endl;
    cout << "The last prompt didn't work because of this issue: http://stackoverflow.com/a/9125587" << endl;


    // this is how you can define the exit code
    return 0;
}
