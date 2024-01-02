#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int profit = 0, min = arr[0];
    for(int i = 1;i<n;i++){
        int cost = arr[i] - min;
        profit = profit>cost?profit:cost;
        min = min<arr[i]?min:arr[i];
    }

    cout<<profit;
}