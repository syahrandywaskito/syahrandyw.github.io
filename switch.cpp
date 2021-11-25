#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;


int main()
{
  int num;
  string month;

  cout << "Masukkan Angka : ";
  cin >> num;
  // penggunaan switch untuk percabangan
  switch (num) {
    case 1:month="Januari";
    break;
    case 2:month="Februari";
    break;
    case 3:month="Maret";
    break;
    case 4:month="April";
    break;
    case 5:month="Mei";
    break;
    case 6:month="Juni";
    break;
    case 7:month="Juli";
    break;
    case 8:month="Agustus";
    break;
    case 9:month="September";
    break;
    case 10:month="Oktober";
    break;
    case 11:month="November";
    break;
    case 12:month="Desember";
    break;
    default :"Tidak ada Bulan";
  }

  cout << "Angka : " << num << "\nmenampilkan Bulan : " << month;

  return 0;
}
