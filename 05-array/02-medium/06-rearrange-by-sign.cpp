#include <bits/stdc++.h>
using namespace std;

void rearrangeBrute(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        arr[i * 2] = pos[i];
    }
    for (int i = 1; i < n / 2; i++)
    {
        arr[i * 2 + 1] = neg[i];
    }
}

void rearrangeOptimal(int arr[], int n)
{
    int ans[n], pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[neg] = arr[i];
            neg += 2;
        }
        else
        {
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rearrangeOptimal(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}