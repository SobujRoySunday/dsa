#include <bits/stdc++.h>
using namespace std;

void sortBetter(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }
    for (int j = 0; j < count0; j++)
    {
        arr[j] = 0;
    }
    for (int j = count0; j < count0 + count1; j++)
    {
        arr[j] = 1;
    }
    for (int j = count0 + count1; j < n; j++)
    {
        arr[j] = 2;
    }
}

void dutchNationalFlagAlgo(int arr[], int n){
    int mid = 0, high = n-1, low = 0;
    while(mid<=high){
        if(arr[mid] == 0){
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if(arr[mid] == 1){
            mid++;
        } else{
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sortBetter(arr, n);
    dutchNationalFlagAlgo(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}