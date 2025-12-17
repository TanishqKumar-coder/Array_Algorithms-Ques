#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
vector<int> searchRange(vector<int>& nums, int target)
{
    if(nums.size()==0)
    return {-1,-1};
    
    int first = -1, last = -1, start = 0, end = nums.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(target == nums[mid])
        {
            first = mid;
            end = mid-1;
        }
        else if(target < nums[mid])
        {
            end = mid-1;
        }
        else if(target > nums[mid])
        {
            start = mid+1;
        }
    }
    start =0; end = nums.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(target == nums[mid])
        {
            last = mid;
            start = mid+1;
        }
        else if(target < nums[mid])
        {
            end = mid-1;
        }
        else if(target > nums[mid])
        {
            start = mid+1;
        }
    }
    return {first, last};
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
    vector<int> result = obj.searchRange(nums, target);
    cout << "The Last and First Pos of the target is: " << endl;
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}