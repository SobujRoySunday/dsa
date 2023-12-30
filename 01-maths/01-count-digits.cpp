#include <iostream>
using namespace std;

int count(int number)
{
  int count = 0;
  while (number > 0)
  {
    count++;
    number /= 10;
  }
  return count;
}

int main()
{
  int number;
  cout << "Enter a number to count its digits: ";
  cin >> number;
  cout << "Number of digits:" << count(number);
  return 0;
}