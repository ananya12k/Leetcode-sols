/*704. Binary Search
Easy

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
___________________________________________________________________________________________________________________

35. Search Insert Position
Easy

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

*/

#include <iostream>
#include <vector>
using namespace std;
class Bin_search_Day_1
{
public:
   Bin_search_Day_1()
   {
         cout<<"Bin_search_Day_1"<<endl;
   } 
    int search(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
        // return high + 1; for insert position
    }
};

int main()
{
    Bin_search_Day_1 bin = Bin_search_Day_1();
    vector<int> nums = {7, 8, 32, 89, 0, 5, 88};
    int ans=bin.search(nums, 5);
    return 0;
}
