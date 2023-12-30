#include <iostream>
using namespace std;

int sumFunctional(int number)
{
  if (number == 1)
  {
    return 1;
  }
  return number * sumFunctional(number - 1);
}

int main()
{
  int number;
  cin >> number;
  cout << sumFunctional(number);
}