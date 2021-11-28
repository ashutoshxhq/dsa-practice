#include <iostream>

using namespace std;

int count_trailing_zeros_in_factorial(int n)
{
  int res;
  for (int i = 1; i <= n; i = i * 5)
  {
    res = res + n/i;
  }
  return res;
}

int calculate_factorial_recursively(int n)
{
  if (n < 0)
  {
    cout << "Cannot calculate factorial of negative numbers" << endl;
    return -1;
  }
  if (n == 0)
  {
    return 1;
  }
  return n * calculate_factorial_recursively(n - 1);
}

int calculate_factorial_iteratively(int x)
{
  int result = 1;
  if (x < 0)
  {
    cout << "Cannot calculate factorial of negative numbers" << endl;
    return -1;
  }
  for (int i = 1; i <= x; i++)
  {
    result = result * i;
  }
  return result;
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
  cout << "Calculating factorial iteratively" << endl;
  assert_eq(calculate_factorial_iteratively(7), 5040);
  assert_eq(calculate_factorial_iteratively(0), 1);
  assert_eq(calculate_factorial_iteratively(1), 1);
  assert_eq(calculate_factorial_iteratively(-6), -1);

  cout << endl
       << "Calculating factorial recursively" << endl;
  assert_eq(calculate_factorial_recursively(7), 5040);
  assert_eq(calculate_factorial_recursively(0), 1);
  assert_eq(calculate_factorial_recursively(1), 1);
  assert_eq(calculate_factorial_recursively(-6), -1);

  return 0;
}