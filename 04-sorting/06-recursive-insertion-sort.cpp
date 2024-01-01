#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int low, int n)
{
  if (low >= n)
    return;

  for (int i = low; i > 0 && arr[i - 1] > arr[i]; i--)
  {
    int temp = arr[i - 1];
    arr[i - 1] = arr[i];
    arr[i] = temp;
  }

  recursiveInsertionSort(arr, low + 1, n);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  recursiveInsertionSort(arr, 0, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}