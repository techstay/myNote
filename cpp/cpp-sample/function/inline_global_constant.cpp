#include <iostream>

using namespace std;

namespace constant
{
// global constants as inline variables, available in C++17
inline constexpr double PI = 3.14159;
} // namespace constant

int main()
{
    cout << constant::PI << endl;
}
