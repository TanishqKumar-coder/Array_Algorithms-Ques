#include<iostream>
#include<vector>
using namespace std;
class Solution{
public :
int searchInsert(vector<int>& nums, int target)
{
    int ans;
    if(target<=nums[0])
    return 0;
    else if(target == nums[nums.size()-1])
    return nums.size()-1;
    else if(target > nums[nums.size()-1])
    return nums.size();
    else{
        int start = 0, end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(target == nums[mid])
            {
                ans = mid;
                break;
            }
            else if(target < nums[mid]){
                end = mid-1;
                if(target > nums[mid-1])
                {
                    ans = mid;
                    break;
                }
            }
            else{
      
                start = mid+1;
            }
        }
    }
    return ans;
}
};
int main()
{
    cout << "Enter the array size then array: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    } 
    cout << "Enter the target value:";
    int target; cin >> target;
    Solution obj;
    cout << "The Answer = " << obj.searchInsert(nums, target);
    return 0;
}