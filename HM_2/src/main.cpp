/**
*@file DataRead
*@description program� ba�latan s�n�f
*@course 2.��retim B grubu
*@assignment 2
*@date 29.11.2018
*@author Muhammet Tar�k �epi muhammettarikcepi@gmail.com G171210097

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
