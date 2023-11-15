#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool checkArmstrong(int n)
    {
        // Write your code here
        int cnt = 0;
        int x = n;
        int temp = x;
        while (n != 0)
        {
            cnt++;
            n = n / 10;
        }
        int ans = 0;
        while (x != 0)
        {
            int last = x % 10;
            ans = ans + pow(last, cnt);
            x = x / 10;
        }
        if (temp == ans || temp == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};