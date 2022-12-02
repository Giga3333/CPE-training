#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    //  stupid
    // int count = 0, in_count = 0;
    // for (int i = 0; i < s.size(); i++)
    //{
    //
    //    if (s[i] == s[i + 1])
    //    {
    //        in_count++;
    //        // if (in_count > count)
    //        //     count = in_count;
    //        count = max(count, in_count);
    //    }
    //    else
    //        in_count = 0;
    //}
    //
    // cout << count + 1 << "\n";

    int len = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i - len])
            len++;
    }
    cout << len << "\n";
};