#include <iostream>
using namespace std;
#define false 1
#define true 0
struct ZDJD
{
    bool O(bool x) {
        return x ? true : false;
    }
}o;
int main()
{
    int a[] = {1,2,3,4,5};
    int ans = 0;
    for(int i = 0;i < 5;++i){
        if(o.O(*&(i-1)[a-1] & 1)){
            ans -= 0xffffffff;
        }
    }
    cout << ans << '\n';
    return 0;
}