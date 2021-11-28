#include <iostream>

using namespace std;

bool is_prime(int n)
{
  if (n == 1 || n == 0)
  {
    return false;
  }
  for (int i = 2; i * i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

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
  cout<<endl;
  if (n > 1)
    cout << n << endl;
}

void assert_eq(int x, int y)
{
  if (x == y)
  {
    cout << "PASS: expected " << y << " got " << x << "\n";
  }
  else
  {
    cout << "FAIL: expected " << y << " got " << x << "\n";
  }
}

int main()
{
  cout << "Checking prime using non efficient method" << endl;
  assert_eq(is_prime(10), 0);
  assert_eq(is_prime(23), 1);
  assert_eq(is_prime(2), 1);
  assert_eq(is_prime(0), 0);
  assert_eq(is_prime(1), 0);
  prime_factors(450);

  return 0;
}