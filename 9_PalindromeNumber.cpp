#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long temp = x;
        long rev = 0;
        while (x > 0)
        {
            long last = x % 10;
            rev = (rev * 10) + last;
            x = x / 10;
        }
        if (rev == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};