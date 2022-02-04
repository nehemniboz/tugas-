#include <iostream>

using namespace std;

int main(){

  int a,t,b;
  float luas;

  cout << "Masukkan panjang alas: ";
  cin >> a;
  cout << "Masukkan tinggi segitiga: ";
  cin >> t;
  cout << "Masukkan lebar: ";
  cin >> b;

  luas = 0.5*a*t*b;
  cout << "Luas segitiga Adalah  " << luas << endl;

  return 0;
}
