#include <iostream>
using namespace std;

bool isArmstrong(int originalNumber)
{
  int copyNumber = originalNumber;
  int comparingNumber = 0;
  while (copyNumber > 0)
  {
    int lastDigit = copyNumber % 10;
    comparingNumber = comparingNumber + lastDigit * lastDigit * lastDigit;
    copyNumber = copyNumber / 10;
  }
  if (comparingNumber == originalNumber)
    return true;
  else
    return false;
}

int main()
{
  int originalNumber;
  cout << "Enter your number: ";
  cin >> originalNumber;
  if (isArmstrong(originalNumber))
    cout << "It's an Armstrong Number";
  else
    cout << "It's not an Armstrong Number";
  return 0;
}