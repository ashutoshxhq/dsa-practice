#include <iostream>

using namespace std;

int calculate_gcd_recursive(int a, int b){
    if(b==0)
      return a;
    else
      return calculate_gcd_recursive(b, a%b);
}

int calculate_lcm_optimised(int a, int b){
  return (a*b)/calculate_gcd_recursive(a,b);
}

int calculate_lcm(int a, int b)
{
  int res = 1;
  if (a<b){
    res = b;
  } else {
    res = a;
  }
  if (a ==0 || b == 0){
    cout<<"Sorry, we cannot calculate lcm for 0"<<endl;
    return -1;
  }
  while(true){
    if (res % a == 0 &&  res % b == 0){
      return res;
    }
    res++;
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
  assert_eq(calculate_lcm(2, 3), 6);
  assert_eq(calculate_lcm(5, 7), 35);
  assert_eq(calculate_lcm(0, 0), -1);
  return 0;
}