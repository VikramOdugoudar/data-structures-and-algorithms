#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int a[] = {5, 8, -4, -4, 9, -2, 2};
    int len = sizeof(a) / sizeof(a[0]);
    bool res = false;
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < len; i++)
    {
        pre_sum = pre_sum + a[i];
        if (s.find(pre_sum) != s.end())
        {
            res = true;
            break;
        }

        s.insert(pre_sum);
    }
    cout << res << endl;
    return 0;
}