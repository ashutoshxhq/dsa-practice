#include <iostream>

using namespace std;

int count_digits(int x)
{
  int result = 0;
  if (x<0) {
    x*=-1;
  }
  if (x == 0){
    return 1;
  }
  while (x > 0)
  {
    x = x / 10;
    result += 1;
  }
  return result;
}

void assert_eq(int x, int y){
  if (x==y){
    cout<<"PASS: expected "<<y<<" got "<<x<<"\n";
  }
  else{
    cout<<"FAIL: expected "<<y<<" got "<<x<<"\n";
  }
}

int main()
{
  assert_eq(count_digits(4578), 4);
  assert_eq(count_digits(0), 1);
  assert_eq(count_digits(-0), 1);
  assert_eq(count_digits(-145), 3);
  return 0;
}