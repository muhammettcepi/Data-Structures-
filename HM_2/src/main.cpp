/**
*@file DataRead
*@description programý baþlatan sýnýf
*@course 2.Öðretim B grubu
*@assignment 2
*@date 29.11.2018
*@author Muhammet Tarýk Çepi muhammettarikcepi@gmail.com G171210097

*/
#include <fstream>
#include <iostream>
#include <string>
#include "DataRead.h"
#include "Dugum.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int x;
	DataRead Readit = DataRead();
	Readit.Dataread1();

	system("PAUSE");
}
