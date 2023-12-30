#include <bits/stdc++.h>
using namespace std;

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

  pair<int, int> high, low;
  high = {0, 0};
  low = {0, 0};
  for (auto it : hashMap)
  {
    if (high.second < it.second)
    {
      high = {it.first, it.second};
    }
    if (low.second == 0)
    {
      low = {it.first, it.second};
    }
    else if (low.second > it.second)
    {
      low = {it.first, it.second};
    }
  }
  if (high.second != 0)
  {
    cout << "Highest Frequency Element is: " << high.first << endl;
  }
  else
    cout << "No high frequency element" << endl;
  if (low.second != 0)
  {
    cout << "Lowest Frequency Element is: " << low.first;
  }
  else
    cout << "No low frequency element" << endl;
  return 0;
}