#include <bits/stdc++.h>
using namespace std;

int maxSumSubarrayBrute(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            max = max > sum ? max : sum;
        }
    }
    return max;
}

int maxSumSubarrayBetter(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            max = max > sum ? max : sum;
        }
    }
    return max;
}

int kedanesAlgo(int arr[], int n)
{
    int max = INT_MIN, sum = 0, start, ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];

        if (sum > max)
        {
            max = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
            sum = 0;
    }

    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    if (max < 0)
        return 0;
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << kedanesAlgo(arr, n);
    return 0;
}