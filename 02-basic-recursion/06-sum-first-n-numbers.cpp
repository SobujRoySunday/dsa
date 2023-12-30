#include <iostream>
using namespace std;

int sumFunctional(int number)
{
  if (number == 0)
  {
    return 0;
  }
  return number + sumFunctional(number - 1);
}

void sumNumbersParameterised(int i, int sum)
{
  if (i < 1)
  {
    cout << sum;
    return;
  }
  sumNumbersParameterised(i - 1, sum + i);
}

int main()
{
  int number;
  cin >> number;
  cout << sumFunctional(number) << endl;
  sumNumbersParameterised(number, 0);
}