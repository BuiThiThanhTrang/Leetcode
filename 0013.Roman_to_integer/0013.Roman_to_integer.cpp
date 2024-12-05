#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> dict = { {'I', 1},
                                  {'V', 5},
                                  {'X', 10},
                                  {'L', 50},
                                  {'C', 100},
                                  {'D', 500},
                                  {'M', 1000},
                                  {'O', 0} };
        int kq = 0;
        char prev = 'O';
        
        for (char i : s)
        {
            if (dict[i] > dict[prev])
            {
                kq += -2 * dict[prev] + dict[i];
                prev = i;
            }
            else
            {
                kq += dict[i];
                prev = i;
            }
        }

        return kq;
    }
};

int main()
{
    Solution s;
    cout << s.romanToInt("IX");
    return 0;
}
