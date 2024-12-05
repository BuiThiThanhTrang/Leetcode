#include <iostream>
using namespace std;

bool dp(int i, int j, string& s, string& p);

int main()
{
    string s, p;
    //cin >> s >> p;
    s = "aaaaabaccbbccababa";
    p = "a * b * .*c * c * .*.*.*c";
    cout << dp(0, 0, s, p);
    return 0;
}

bool dp(int i, int j, string& s, string& p)
{
    if (i >= s.length() && j >= p.length())
        return true;
    if (j >= p.length())
        return false;
    bool match = (s[i] == p[j]) || (p[j] == '.' && i < s.length());
    if (match && p[j + 1] == '*') //case 1
        return dp(i + 1, j, s, p) || dp(i, j + 2, s, p);
    if (match && p[j + 1] != '*') // case 2
        return dp(i + 1, j + 1, s, p);
    if (!match && p[j + 1] == '*') /// case 3
        return dp(i, j + 2, s, p);
    return false;
}