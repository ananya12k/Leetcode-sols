/*744. Find Smallest Letter Greater Than Target

*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans=-1;
         int low=0;
         int high=letters.size()-1;
        if(target>=letters[high]){
            return letters[0];
        }
        while(low<=high){
        int mid =(low+high)/2;
         if(target<letters[mid]){
               high=mid-1;
               ans=mid;
            }
           else {
             low=mid+1;
            } 
        }
    return letters[ans];
        
    }
};
int main()
{
    Solution bin = Solution();
    vector<char> nums = {'c', 'f', 'j','y'};
    int ans=bin.nextGreatestLetter(nums, 5);
    return 0;
}