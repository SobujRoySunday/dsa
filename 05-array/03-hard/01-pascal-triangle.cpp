#include <bits/stdc++.h>
using namespace std;

long long ncr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{
    // Find value of (r,c)th position in a Pascal Triangle
    int row, col;
    cin >> row >> col;
    cout << ncr(row - 1, col - 1);

    // Find the entire row of Pascal Triangle
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        cout << ans << " ";
    }

    // Generate a whole Pascal Triangle
    vector<vector<int>> pascal;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        vector<int> tempList;
        int answer = 1;
        tempList.push_back(answer);
        for (int j = 1; j < i; j++)
        {
            answer = answer * (i - j);
            answer = answer / j;
            tempList.push_back(answer);
        }
        pascal.push_back(tempList);
    }
}