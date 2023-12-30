#include <iostream>
using namespace std;

int main()
{
  int firstNumber, secondNumber, answer;
  cout << "Enter two numbers: ";
  cin >> firstNumber >> secondNumber;

  for (int i = 1; i <= min(firstNumber, secondNumber); i++)
  {
    if (firstNumber % i == 0 && secondNumber % i == 0)
      answer = i;
  }
  cout << "GCD of this two numbers is:" << answer;
  return 0;
}