#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}

int bruteSolution(int arr[], int n)
{
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 1;
        while (linearSearch(arr, n, x + 1))
        {
            x++;
            count++;
        }
        longest = longest > count ? longest : count;
    }
    return longest;
}

int betterSolution(int arr[], int n)
{
    int longest = 1, lastSmaller = INT_MIN, cntcur = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            cntcur++;
            lastSmaller = arr[i];
        }
        else
        {
            cntcur = 1;
        }
        longest = longest > cntcur ? longest : cntcur;
    }
    return longest;
}

int optimalSolution(int arr[], int n)
{
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x++;
                cnt++;
            }
            longest = longest > cnt ? longest : cnt;
        }
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << bruteSolution(arr, n) << endl;
}