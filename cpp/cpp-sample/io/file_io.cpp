#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    constexpr auto HOST_WIN   = "C:\\Windows\\System32\\drivers\\etc\\hosts"sv;
    constexpr auto HOST_LINUX = "/etc/hosts"sv;

    ifstream host_file(static_cast<string>(HOST_LINUX), fstream::in);
    for (char c; host_file.get(c);)
    {
        cout << c;
    }
    host_file.close();

    ofstream out("hello.txt", fstream::out);
    out << "Hello techstay!" << endl;
    out.close();
}
