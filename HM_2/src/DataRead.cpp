/**
*@file DataRead
*@description Dosyayý okuyan Sýnýf
*@course 2.Öðretim B grubu
*@assignment 2
*@date 29.11.2018
*@author Muhammet Tarýk Çepi muhammettarikcepi@gmail.com G171210097

*/


#include "DataRead.h"
#include "Stack.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "Dugum.h"
using namespace std;
int n = 0;

Dugum dugumler = Dugum();
Stack yigit = Stack();

DataRead::DataRead() {

}
void DataRead::Ask() {
	int secim;
	cout << "lütfen seçiniz" << '\n';
	cout << "1.Sola Hareket " << '\n';
	cout << "2.Saða Hareket " << '\n';
	cout << "3.Bir Düðümün Durumunu Yazdýr" << '\n';
	cout << "4.Tüm Durumlarý Yazdýr" << '\n';
	cout << "5.Çýkýþ" << '\n';
	cin >> secim;
	if (secim == 2) {
		dugumler.SagaKaydir();
		yigit.PushRight();
		Ask();
	}
	else if (secim == 1) {
		dugumler.SolaKaydir();
		yigit.PushLeft();
		Ask();
	}
	else if (secim == 3) {
		cout << "hangi konumda eleman bulmak istiyorsunuz?" << '\n';
		cin >> KonumuileBul;
		dugumler.TempHead();
		yigit.TempHead();
		dugumler.KonumBul(KonumuileBul);
		yigit.KonumBul(KonumuileBul);
		dugumler.TekiYazdir();
		yigit.TekiYazdir();
		Ask();
	}
	else if (secim == 4) {
		WriteAll();
		Ask();
	}
	else if (secim == 5)
		exit(1);
}

void DataRead::Dataread1() {
	char line[500];
	ifstream oku;
	oku.open("doc\\Okuu.txt");
	if (!oku) {
		cerr << "Dosyayý açamýyorum.";
		exit(1);   // call system to stop
	}

	while (oku) {
		oku.getline(line, 10, ' ');
		dugumler.PushBack(line);
		yigit.Push(line);
		n++;
	}
	oku.close();
	WriteAll();

}

void DataRead::WriteAll()
{
	system("CLS");
	yigit.TempHead();
	dugumler.TempHead();
	for (int i = 0; i < n-1; i++) {
		dugumler.TekiYazdir();
		yigit.TekiYazdir();
	}
	Ask();
}
void DataRead::Write() {
	system("CLS");
	cout << "konumdaki eleman:";
	dugumler.TekiYazdir();
	yigit.TekiYazdir();
	Ask();
}
DataRead::~DataRead()
{
}
