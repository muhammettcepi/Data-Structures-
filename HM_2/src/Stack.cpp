/**
*@file Stack
*@description Yýðýtý oluþturan sýnýf
*@course 2.Öðretim B grubu
*@assignment 2
*@date 29.11.2018
*@author Muhammet Tarýk Çepi muhammettarikcepi@gmail.com G171210097

*/
#include "Stack.h"
#include "Dugum.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "DataRead.h"
using namespace std;

DataRead Readitagain1 = DataRead();
Stack::Stack()
{
	stackBasi = -1;
	elemansayisi = 0;
	kapasite = 0;
}
Stack::Stack(string data, Stack * next)
{
	Push(this->elemanlar, stoi(data));
	this->next = next;
	this->prev = prev;
};

void Stack::Push(string data) {
	if (data != " "&&data != "\n"&&data != "\0") {
		yeni = new Stack(data);
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
void Stack::Push(long eleman[],long tempdata) {
	if (dolumu()) {
		yerAc(2 * kapasite);
	}
	eleman[elemansayisi] = tempdata;
}
void Stack::TekiYazdir() 
{
	int eskielemansayisi = 0;
	eskielemansayisi = elemansayisi;
		for (int i = 0; i <= eskielemansayisi; i++) {
			cout << temp->elemanlar[elemansayisi]<<setw(5);
			Pop();
		}
		cout << '\n';
	elemansayisi = eskielemansayisi;
	stackBasi = elemansayisi;
	temp = temp->next;
}
void Stack::PushRight()
{
	
	elemansayisi++;
	stackBasi++;
	temp = head;
	tempeleman1 = temp->elemanlar[elemansayisi - 1];
	while (temp != tail) {
		tempeleman2 = temp->next->elemanlar[elemansayisi-1];
		Push(temp->next->elemanlar,tempeleman1);
		tempeleman1 = tempeleman2;
		temp = temp->next;
	}
	Push(tail->next->elemanlar, tempeleman1);
}
void Stack::PushLeft() {
	elemansayisi++;
	stackBasi++;
	temp = tail;
	tempeleman1 = temp->elemanlar[elemansayisi - 1];
	while (temp != head) {
		tempeleman2 = temp->prev->elemanlar[elemansayisi - 1];
		Push(temp->prev->elemanlar,tempeleman1);
		tempeleman1 = tempeleman2;
		temp = temp->prev;
	}
	Push(tail->elemanlar, tempeleman1);
}
void Stack::Pop()
{
	stackBasi--;
	elemansayisi--;
}
void Stack::TempHead()
{
	temp = head;
}
void Stack::KonumBul(int konum)
{
	for (int i = 0; i < konum-1; i++) {
		temp = temp->next;
	}

}
Stack::~Stack()
{
	if (elemanlar != NULL) delete[] elemanlar;
}
