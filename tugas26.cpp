#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int angka;
	cout<<"Menentukan Bilangan Genap Atau Ganjil"<<endl;
	cout<<"Masukkan  Bilangan : ";cin>>angka;
	
	string gega = angka % 2 == 0 ? "Genap": "Ganjil";
	cout<<gega;
	return 0;
}
