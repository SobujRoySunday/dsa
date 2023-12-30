#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int number1, number2;
  cout << "Enter two numbers: ";
  cin >> number1 >> number2;
  cout << gcd(max(number1, number2), min(number1, number2));
  return 0;
}