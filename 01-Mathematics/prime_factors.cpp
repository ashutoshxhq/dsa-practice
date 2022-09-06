#include <iostream>

using namespace std;

void prime_factors(int n)
{
  cout << n << "=";
  if (n <= 1)
  {
    return;
  }
  for (int i = 2; i * i <= n; i++)
  {
    while (n % i == 0)
    {
      cout << i << " ";
      n = n / i;
    }
  }
  cout << endl;
  if (n > 1)
    cout << n << endl;
}

int main()
{
  prime_factors(450);

  return 0;
}