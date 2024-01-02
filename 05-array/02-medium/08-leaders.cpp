#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = INT_MIN;
    vector<int>leaders;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = n-1;i>=0;i--){
        if(arr[i]>max){
            leaders.push_back(arr[i]);
            max = arr[i];
        }

    }

    reverse(leaders.begin(), leaders.end());

    for(auto it:leaders) cout<<it<<" ";
    return 0;
}