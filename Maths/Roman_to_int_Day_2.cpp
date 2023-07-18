#include <iostream>
using namespace std;
/*13. Roman to Integer
Easy

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.*/
class Solution {
public:
   int romanToInt(string s) {
    int ans = 0;
    int prevValue = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        int currentValue = 0;
        switch (s[i]) {
            case 'I':
                currentValue = 1;
                break;
            case 'V':
                currentValue = 5;
                break;
            case 'X':
                currentValue = 10;
                break;
            case 'L':
                currentValue = 50;
                break;
            case 'C':
                currentValue = 100;
                break;
            case 'D':
                currentValue = 500;
                break;
            case 'M':
                currentValue = 1000;
                break;
            default:
                return 0; 
        }

        if (currentValue < prevValue) {
            ans -= currentValue;
        } else {
            ans += currentValue;
        }
        prevValue = currentValue;
    }

    return ans;
}

};
int main()
{
    Solution s=Solution();
    string str="MCMXCIV";
    cout<<s.romanToInt(str)<<endl;
return 0;
}