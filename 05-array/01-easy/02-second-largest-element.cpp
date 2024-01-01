#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max = INT_MAX;
  int secondMax = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      secondMax = max;
      max = arr[i];
    }
  }

  if (max == secondMax || secondMax == INT_MAX)
  {
    cout << "No second largest element" << endl;
  }
  cout << "Second Maximum: " << secondMax << endl;
}