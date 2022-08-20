#include <iostream>
#include <vector>
using namespace std;
int sumGiveNumer(vector<int> &arr, int s, int e)
{
    int total = 0;
    for (int i = s; i < e; i++)
    {
        total += arr[i];
    }
    return total;
}
int pivotIndex(vector<int> &nums)
{
    int mid = (nums.size() - 1) / 2;
    int pivotIndex = -1;
    int leftIndex = 0;
    int rightIndex = 0;

    while (true)
    {
        if (mid == -1)
            
        {
            return pivotIndex;
        }

        else if (mid == nums.size() - 1)
        {
            return pivotIndex;
        }
        leftIndex=sumGiveNumer(nums,0,mid);
        rightIndex=sumGiveNumer(nums,mid+1,nums.size());
        cout<<leftIndex<<" "<<rightIndex;
        if (leftIndex==rightIndex)
        {
            pivotIndex=mid;
            return pivotIndex;
        }else if (leftIndex<rightIndex)
        {
            mid++;
            // pivotIndex=mid;
        }else{
            mid--;
            // pivotIndex=mid;
        }
        
        
        
    }

    return 0;
}
int main()
{

    int n = 6;
    vector<int> nums = {-1,-1,-1,-1,0,1};
    cout<<pivotIndex(nums);

    return 0;
}