#include <iostream>

using namespace std;

int main()
{
    // c style strings
    char str1[] = "abcd";
    // the actual string is abcd\0, so the length is 5 rather than 4
    cout << "The length of str1: " << sizeof(str1) << endl;
}
