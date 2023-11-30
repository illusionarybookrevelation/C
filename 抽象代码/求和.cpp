#include <iostream>
using namespace std;

int sub(int a,int b)
{
    if(!a)return b;
    return sub((a & b) << 1,a ^ b);
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int a,b;
    cin >> a >> b;
    cout << sub(a,b) << '\n';
    return 0;
}