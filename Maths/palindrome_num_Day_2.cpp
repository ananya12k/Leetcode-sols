#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if ((to_string(x)).at(0) == '-')
        {
            return false;
        }

        int temp = x;
        long int sum = 0;

        while (x > 0)
        {
            int r = x % 10;
            sum = (sum * 10) + r;
            x = x / 10;
        }
        if (temp == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution s = Solution();
    cout << s.isPalindrome(121);
    return 0;
}