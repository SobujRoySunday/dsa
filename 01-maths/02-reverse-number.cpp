#include <iostream>
using namespace std;

int reverseNum(int originalNumber)
{
  int newNumber = 0;
  while (originalNumber > 0)
  {
    int lastDigit = originalNumber % 10;
    newNumber = (newNumber * 10) + lastDigit;
    originalNumber /= 10;
  }
  return newNumber;
}

int main()
{
  int number;
  cout << "Enter your Number: ";
  cin >> number;
  cout << "Reversed Number is: " << reverseNum(number);
  return 0;
}