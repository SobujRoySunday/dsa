#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int number;
  cout << "Enter your number: ";
  cin >> number;
  for (int i = 1; i <= sqrt(number); i++)
  {
    if (number % i == 0)
    {
      cout << i << " ";
      if (number / i != i)
        cout << number / i << " ";
    }
  }
  return 0;
}