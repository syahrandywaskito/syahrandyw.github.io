//program rumus luas dan keliling
#include <iostream>
using namespace std;

#define PI 3.14 

int main() {
  short jari_jari, diameter, desc;
  float luas, keliling;
  cout << "jari jari = ";
  cin >> jari_jari;
  diameter = jari_jari * 2;
  cout << "Diameter = " << diameter << endl;
  desc = jari_jari;
  desc %= 7;
  if ( desc == 0) { 
    luas = (jari_jari / 7) * 22 * jari_jari;
    cout << "LUAS = " << luas << endl;
    keliling = (diameter / 7) * 22;
    cout << "KELILING = " << keliling << endl;
  }
  else{ 
    luas = PI*jari_jari * jari_jari;
    cout << "LUAS = " << luas << endl;
    keliling = PI*diameter;
    cout << "KELILING = " << keliling << endl;
  }
  return 0;
}
