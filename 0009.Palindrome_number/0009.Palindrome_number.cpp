#include <iostream>
using namespace std;

bool isPalindrome(int x);

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int r = 0;
    int temp = x;

    while (temp != 0)
    {
        r = r * 10 + temp % 10;
        temp = temp / 10;
    }

    return r == x;
}