#include <iostream>

using namespace std;

int pow_recursive(int x, int n){
  if (n==0){
    return 1;
  }
  int temp = pow_recursive(x, n/2);
  temp *= temp;
  if (n%2 == 0)
    return temp;
  else 
    return temp*x;
}

int pow(int x, int n){
  int res = x;
  for (int i=1; i<n; i++){
    res *= x;
  }
  return res;
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
  assert_eq(pow(10,2), 100);
  assert_eq(pow(2, 2), 4);
  assert_eq(pow(12, 2), 144);
  assert_eq(pow(5, 3), 125);

  assert_eq(pow_recursive(10,2), 100);
  assert_eq(pow_recursive(2, 2), 4);
  assert_eq(pow_recursive(12, 2), 144);
  assert_eq(pow_recursive(5, 3), 125);
  
  return 0;
}