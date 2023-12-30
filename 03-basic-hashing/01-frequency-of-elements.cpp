#include <iostream>
using namespace std;

int main()
{
  // take the array
  int N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  // store
  int hash[100000 + 1] = {0};
  for (int i = 0; i < N; i++)
    hash[arr[i]] += 1;

  // fetch
  int Q;
  cin >> Q;
  while (Q--)
  {
    int number;
    cin >> number;
    cout << hash[number] << endl;
  }
  return 0;
}