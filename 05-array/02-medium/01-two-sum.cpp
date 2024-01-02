#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSumBrute(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "YES\n";
                return {i, j};
            }
        }
    }
    cout << "NO\n";
    return {-1, -1};
}

pair<int, int> twoSumBetter(int arr[], int n, int sum)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = sum - a;
        if (mpp.find(more) != mpp.end())
        {
            cout << "YES\n";
            return {i, mpp[a]};
        }
        mpp[a] = i;
    }
    cout << "NO\n";
    return {-1, -1};
}

void twoSumOptimal(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int s = arr[left] + arr[right];
        if (s == sum)
        {
            cout << "YES\n";
            return;
        }
        else if (s < sum)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "NO\n";
}

int main()
{
    int n, sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> sum;

    // pair<int, int> indexes = twoSumBrute(arr, n, sum);
    // pair<int, int> indexes = twoSumBetter(arr, n, sum);
    // cout << "{" << indexes.first << ", " << indexes.second << "}\n";
    twoSumBetter(arr, n, sum);
    return 0;
}