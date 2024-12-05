#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string kq = "";

        while (num >= 1000)
        {
            kq += "M";
            num -= 1000;
        }

        int ht = num / 100;
        num = num % 100;
        switch (ht)
        {
        case 1:
            kq += "C";
            break;
        case 2:
            kq += "CC";
            break;
        case 3:
            kq += "CCC";
            break;
        case 4:
            kq += "CD";
            break;
        case 5:
            kq += "D";
            break;
        case 6:
            kq += "DC";
            break;
        case 7:
            kq += "DCC";
            break;
        case 8:
            kq += "DCC";
            break;
        case 9:
            kq += "CM";
            break;
        }

        int hc = num / 10;
        num = num % 10;
        switch (hc)
        {
        case 1:
            kq += "X";
            break;
        case 2:
            kq += "XX";
            break;
        case 3:
            kq += "XXX";
            break;
        case 4:
            kq += "XL";
            break;
        case 5:
            kq += "L";
            break;
        case 6:
            kq += "LX";
            break;
        case 7:
            kq += "LXX";
            break;
        case 8:
            kq += "LXXX";
            break;
        case 9:
            kq += "XC";
            break;
        }

        switch (num)
        {
        case 1:
            kq += "I";
            break;
        case 2:
            kq += "II";
            break;
        case 3:
            kq += "III";
            break;
        case 4:
            kq += "IV";
            break;
        case 5:
            kq += "V";
            break;
        case 6:
            kq += "VI";
            break;
        case 7:
            kq += "VII";
            break;
        case 8:
            kq += "VIII";
            break;
        case 9:
            kq += "IX";
            break;
        }
        return kq;
    }
};

int main()
{
    Solution s;
    cout << s.intToRoman(15);
    return 0;
}
