#include <iostream>

using namespace std;

int main()
{
    int res = 1;
    long long a, b;
    cin >> a >> b;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    cout << res;
}
