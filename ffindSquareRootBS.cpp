#include <iostream>
#include <vector>
using namespace std;
int sqrtN(long long int N)
{

    long long int s = 0;
    long long int e = N;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == N)
        {
            return mid;
        }
        else if (square < N)
        {
            // cout<<"safi in else if brack";
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // cout<<"safi hamza is "<<endl;
            e = mid - 1;
        }
        cout<<mid<<endl;
        mid = s + (e - s) / 2;
    }
    return ans;
}

using namespace std;

int main()
{
    long long k;
    cin >> k;
    cout << sqrtN(k);

    return 0;
}