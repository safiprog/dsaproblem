#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int leftIndex = 0;

    int pivotIndex = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int rightIndex = 0;
        if (i == 0)
            ;
        else
        {
            leftIndex += nums[i - 1];
        }
        for (int j = i + 1; j < nums.size(); j++)
        {

            rightIndex += nums[j];
        }

        if (leftIndex == rightIndex)
        {
            pivotIndex = i;
            return i;
        }
    }
    return pivotIndex;
}

int main()
{

    int n = 6;
    vector<int> nums = {2,1,-1};
    cout << pivotIndex(nums);
    return 0;
}