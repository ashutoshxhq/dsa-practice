#include <iostream>

using namespace std;

int calculate_gcd_recursive(int a, int b){
    if(b==0)
      return a;
    else
      return calculate_gcd_recursive(b, a%b);
}

int calculate_gcd(int a, int b)
{
  while (a != b)
  {
    if (a != b)
    {
      if (a > b)
        a = a - b;
      else
        b = b - a;
    }
  }
  return a;
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
  assert_eq(calculate_gcd(10, 15), 5);
  assert_eq(calculate_gcd(5, 5), 5);
  assert_eq(calculate_gcd(23, 11), 1);
  assert_eq(calculate_gcd(0, 0), 0);
  return 0;
}