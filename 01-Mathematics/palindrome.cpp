#include <iostream>

using namespace std;

int reverse_digits(int x)
{
  int result = 0;
  if (x<0) {
    x*=-1;
  }
  if (x == 0){
    return 0;
  }
  while (x > 0)
  {
    result = result*10+(x%10);
    x = x / 10;
  }
  return result;
}

void is_palindrome(int number, int reverse_of_number){
  if (number == reverse_of_number) {
    cout<<number<<":Its a palindrome"<<endl;
  } else{
    cout<<number<<":Its not a palindrome"<<endl;
  }
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
  int number = 12321;
  is_palindrome(number, reverse_digits(number));
  number =  1234567;
  is_palindrome(number, reverse_digits(number));
  number =  -789987;
  is_palindrome(number, -1*reverse_digits(number));

  // Test reverse_digits
  assert_eq(reverse_digits(4578), 8754);
  assert_eq(reverse_digits(0), 0);
  assert_eq(reverse_digits(-145), 541);
  return 0;
}