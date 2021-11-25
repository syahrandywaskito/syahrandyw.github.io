
#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  char op;
  cout << "Masukkan angka : " << endl;
  cin >> a >> op >> b;

  if (op == '+') {
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;
  }
  else if (op == '-') {
    c = a - b;
    cout << a << " - " << b << " = " << c << endl;
  }
  else if (op == '*') {
    c = a * b;
    cout << a << " x " << b << " = " << c << endl;
  }
  else if (op == '/') {
    c = a / b;
    cout << a << " / " << b << " = " << c << endl;
  }
  else if (op == '%') {
    c = a % b;
    cout << a << " Modulus " << b << " = " << c << endl;
  }
  else cout << " tidak valid" << endl;
  return 0;
}
