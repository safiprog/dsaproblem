#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void sort012(int *arr, int n)
{
   
   int low = 0;
   int mid = 0;
   int high = n-1;
    
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++; mid++;    
            cout<<"step "<<" low  "<<low<<"  mid  "<<mid<<"  highe  "<<high<<endl;
            printArr(arr,n);
    
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {

            swap(arr[mid],arr[high]);
            high--;
            cout<<"last "<<"step "<<"low   "<<low<<"mid  "<<mid<<"highe  "<<high<<endl;
            printArr(arr,n);
        }
    }
}

int main(){
    int n=7;
    int arr[n]={0, 1, 2, 0, 2, 1, 2};
    sort012(arr,n);
    
    return 0;
}