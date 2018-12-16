/**
*@file Dugum
*@description Düðümleri oluþturan Sýnýf
*@course 2.Öðretim B grubu
*@assignment 2
*@date 29.11.2018
*@author Muhammet Tarýk Çepi muhammettarikcepi@gmail.com G171210097

*/

#include "Dugum.h"
#include "Stack.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "DataRead.h"
using namespace std;
DataRead Readitagain = DataRead();
Stack yigit1 = Stack();
Dugum::Dugum()
{
}
Dugum::Dugum(string data, Dugum * next)
{
	this->data = data;
	this->next = next;
	this->prev = prev;
};
void Dugum::PushBack(string data) {
	if (data != " "&&data != "\n"&&data != "\0") {
		yeni = new Dugum(data);
		if (head == NULL) {
			head = yeni;
			tail = yeni;

		}
		else {
			tail->next = yeni;
			yeni->prev = tail;
			yeni->next = head;
			tail = yeni;

		}
	}
}
void Dugum::TekiYazdir()
{
	cout << temp->data << setw(2) << ':';
	temp = temp->next;
}
void Dugum::TempHead()
{
	temp = head;
}
void Dugum::KonumBul(int konum)
{
	for (int i = 0; i < konum-1; i++) {
		temp = temp->next;
	}

}
void Dugum::SagaKaydir() {
	temp = head;
	tempdata1 = temp->data;
	while (temp != tail) {
		tempdata2 = temp->next->data;
		temp->next->data = tempdata1;
		tempdata1 = tempdata2;
		temp = temp->next;
	}
	tail->next->data = tempdata1;
	
}
void Dugum::SolaKaydir() {
	temp = tail;
	tempdata1 = temp->data;
	while (temp != head) {
		tempdata2 = temp->prev->data;
		temp->prev->data = tempdata1;
		tempdata1 = tempdata2;
		temp = temp->prev;
	}
	tail->data = tempdata1;
}

Dugum::~Dugum()
{
}
