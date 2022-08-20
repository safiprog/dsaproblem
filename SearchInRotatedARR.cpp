#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return e;
}

int kindex(vector<int> &arr, int start, int n, int k)
{
    int s = start;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = pivotIndex(arr, n);
    if (arr[0] <= k && arr[pivot - 1] >= k)
    {
        return kindex(arr, 0, pivot, k);
        cout<<"safi in if block";
    }
    else
    {
        cout<<"safi is else block";
        return kindex(arr, pivot, n, k);
    }
}

int main()
{
    int n = 4;
    vector<int> arr = {2,3,5,8};
    // cout << pivotIndex(arr, n) << endl;
    // cout << kindex(arr, n, 8) << endl;
    cout << findPosition(arr, n, 3);

    return 0;
}