#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("Hello world!");
    int alpha_count{}, digit_count{}, space_count{}, punct_count{};

    for (auto c : s)
    {
        if (isalpha(c))
            alpha_count++;
        if (isdigit(c))
            digit_count++;
        if (isspace(c))
            space_count++;
        if (ispunct(c))
            punct_count++;
    }
    cout << "alpha_count:" << alpha_count << ", digit_count:" << digit_count << ", space_count:" << space_count
         << ", punct_count:" << punct_count << endl;
}
