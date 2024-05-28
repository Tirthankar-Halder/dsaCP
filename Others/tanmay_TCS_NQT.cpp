#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t == 3)
        cout << 4 << endl;
    else
    {
        if (t % 2 == 0)
            cout << t + 2 << endl;
        else
            cout << t + 1 << endl;
    }
    return 0;
}