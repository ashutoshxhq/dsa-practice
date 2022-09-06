#include <iostream>

using namespace std;

bool is_prime_efficient(int n){
  if (n == 1 || n == 0){
    return false;
  }
  for (int i=2; i*i<n; i++){
    if (n%i  == 0){
      return false;
    }
  }
  return true;
}

bool is_prime(int n){
  if (n == 1 || n == 0){
    return false;
  }
  for (int i=2; i<n; i++){
    if (n%i  == 0){
      return false;
    }
  }
  return true;
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
  cout<<"Checking prime using non efficient method"<<endl;
  assert_eq(is_prime(10), 0);
  assert_eq(is_prime(23), 1);
  assert_eq(is_prime(2), 1);
  assert_eq(is_prime(0), 0);
  assert_eq(is_prime(1), 0);

  cout<<"Checking prime using efficient method"<<endl;
  assert_eq(is_prime_efficient(10), 0);
  assert_eq(is_prime_efficient(23), 1);
  assert_eq(is_prime_efficient(2), 1);
  assert_eq(is_prime_efficient(0), 0);
  assert_eq(is_prime_efficient(1), 0);
  
  return 0;
}