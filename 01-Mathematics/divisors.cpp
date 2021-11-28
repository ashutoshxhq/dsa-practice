#include <iostream>

using namespace std;

void print_divisors(int n)
{
  cout << n << "=";
  int i =0;
  for (i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
      cout << i << " ";
  }
  for (; i>=1; i--)
  {
    if (n % i == 0)
      cout << n/i << " ";
  }
  cout << endl;
}

int main()
{
  print_divisors(450);

  return 0;
}