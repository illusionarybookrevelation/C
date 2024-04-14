#include <iostream>
#include <iomanip>
#include <tchar.h>
using namespace std;
int main(int argc, char* argv[])
{
    wchar_t c[] = L"\n\\\407as1\"\xabc";
    int b = sizeof(c);
    int a = wcslen(c);
    cout << a << endl;
    cout << b << endl;
    cout << sizeof(c) << endl;

    return 0;
}