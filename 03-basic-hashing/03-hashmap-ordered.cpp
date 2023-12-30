#include <bits/stdc++.h>
using namespace std;

// For ordered map, storing and fetching take O(log(N)) time, in all cases

int main()
{
  int N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  map<int, int> hashMap;
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