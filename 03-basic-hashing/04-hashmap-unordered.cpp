#include <bits/stdc++.h>
using namespace std;

// For unordered map, storing and fetching take O(1) time, for best and average case, and takes O(N) time for worst case

int main()
{
  int N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  unordered_map<int, int> hashMap;
  for (int i = 0; i < N; i++)
    hashMap[arr[i]]++;

  int Q;
  cin >> Q;
  while (Q--)
  {
    int n;
    cin >> n;
    cout << hashMap[n] << " ";
  }
  return 0;
}