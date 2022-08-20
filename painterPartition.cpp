#include <iostream>
#include <vector>
using namespace std;
int maxArr(vector<int> arr, int n)
{
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int sumA(vector<int> arr, int n)
{
    int sumArr = 0;
    for (int i = 0; i < n; i++)
    {
        sumArr += arr[i];
    }
    return sumArr;
}
bool ispossible(vector<int> arr, int n, int m, int mid)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            student++;
            sum = arr[i];
        }
    }
    return student <= m;
}

int findLargestMinDistance(vector<int> &arr, int m)
{
    int n=arr.size();
    int s = maxArr(arr, n);
    int e = sumA(arr, n);
    int sum = 0;
    int ans = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid) == true)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int n = 4;
    int k = 2;
    vector<int> arr = {10, 20, 30, 40};
    cout<<findLargestMinDistance(arr,k);

    return 0;
}