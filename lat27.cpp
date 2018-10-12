#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int suhu;
	cout<<"Masukkan Suhu : ";
	cin>>suhu;
	
	if (suhu>30){
		cout<<"Panas"<<endl;} else
	if (suhu>22&&suhu<=30){
		cout<<"Normal"<<endl;}else
	if (suhu<22){
		cout<<"Dingin"<<endl;
		
		
		return 0;
	}
	}
