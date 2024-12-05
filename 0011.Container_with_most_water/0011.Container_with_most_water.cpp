#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int lc = 0;
        while (start < end)
        {
            lc = max(lc, min(height[start], height[end]) * (end - start));

            if (height[start] > height[end])
                end--;
            else
                start++;
        }
        return lc;
    }
};

int main()
{
    Solution s;
    cout << s.maxArea({ 1,8,6,2,5,4,8,3,7 });
    return 0;
}

