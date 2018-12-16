#pragma once
#include<iostream>
#include<string>
#include "DataRead.h"
using namespace std;
class Dugum
{
private:
	string data, tempdata1, tempdata2;
	Dugum *next, *prev;
	Dugum *head, *tail, *yeni, *temp, *eskidugum, *yenidugum;
public:
	Dugum();

	Dugum(string data, Dugum *next = NULL);


	void PushBack(string data);

	void TekiYazdir();
	void TempHead();
	void KonumBul(int konum);
	void SagaKaydir();
	void SolaKaydir();

	~Dugum();
};

