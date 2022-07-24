#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int main()
{

    int num[7] = {1, 2, 3, 4, 5, 6, 7};
    // int num[4]={6,8,7,9};
    int n = sizeof(num) / sizeof(int);
    reverse(num, n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}