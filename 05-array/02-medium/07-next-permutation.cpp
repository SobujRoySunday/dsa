#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int i, int n)
{
    while(i < n)
    {
        int temp = arr[i];
        arr[i++] = arr[n];
        arr[n--] = temp;
    }
}

int main()
{
    int n, ind = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        rev(arr, 0, n-1);
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            int temp = arr[i];
            arr[i] = arr[ind];
            arr[ind] = temp;
            break;
        }
    }
    rev(arr, ind+1, n-1);

    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}