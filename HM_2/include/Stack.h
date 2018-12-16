#pragma once
#include<iostream>
#include<string>
#include "DataRead.h"
class Stack
{
private:
	long tempeleman1, tempeleman2;
	int kapasite=10;
	int stackBasi;
	long *elemanlar = new long[kapasite];
	Stack *next, *prev;
	Stack *head, *tail, *yeni, *temp, *eskidugum, *yenidugum;
	int elemansayisi;
	bool dolumu() {
		return elemansayisi == kapasite;
	}

	/**
		Kapasite dolunca yer açar.
	*/
	void yerAc(int boyut)
	{
		long *tmp = new long[boyut];
		for (int j = 0; j < elemansayisi; j++) tmp[j] = elemanlar[j];
		if (elemanlar != NULL) delete[] elemanlar;
		elemanlar = tmp;
		kapasite = boyut;
	}
public:
	Stack();
	Stack(string data, Stack *next = NULL);
	bool isEmpty() const {
		return stackBasi == -1;
	}
	void Push(string data);
	void Push(long eleman[],long tempdata);
	void TekiYazdir();
	void PushRight();
	void PushLeft();
	void Pop();
	void TempHead();
	void KonumBul(int konum);
	~Stack();
};

