#include <bits/stdc++.h>
using namespace std;

void majorityBrute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
        {
            cout << arr[i];
            return;
        }
    }
    cout << -1;
}

void majorityBetter(int arr[], int n)
{
    map<int, int> hashMap;
    for (int i = 0; i < n; i++)
    {
        hashMap[arr[i]]++;
    }
    for (auto it : hashMap)
    {
        if (it.second > n / 2)
        {
            cout << it.first;
            return;
        }
    }
    cout << -1;
}

void mooresVotingAlgo(int arr[], int n)
{
    int count = 0, el, count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            count1++;
    }
    if (count1 > n / 2)
        cout << el;
    else
        cout << -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // majorityBrute(arr, n);
    // majorityBetter(arr, n);
    mooresVotingAlgo(arr, n);

    return 0;
}