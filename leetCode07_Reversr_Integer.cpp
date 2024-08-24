#include <iostream>

using namespace std;

int reverse(int x)
{
    long long int rev = 0, rem = 0;
    bool negative = false;

    // Special case for -2147483648 (INT_MIN)
    if (x == INT_MIN)
        return 0;

    if (x < 0)
    {
        negative = true;
        x = -x;
    }

    while (x > 0)
    {
        rem = x % 10;

        // Check if rev will overflow before updating it
        if (rev > (INT_MAX - rem) / 10)
            return 0;  // Return 0 to indicate overflow

        rev = rev * 10 + rem;
        x /= 10;
    }

    if (negative)
        return -rev;
    else
        return rev;
}


int main()
{
    cout<< reverse(15346469);
    return 0;
}