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
    }
};

int main()
{
    Bin_search_Day_1 bin = Bin_search_Day_1();
    vector<int> nums = {7, 8, 32, 89, 0, 5, 88};
    int ans=bin.search(nums, 5);
    return 0;
}
