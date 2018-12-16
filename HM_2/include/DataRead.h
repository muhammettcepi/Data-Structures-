#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "Dugum.h"
using namespace std;
class DataRead
{
private:
	int KonumuileBul;
public:
	DataRead();
	void Dataread1();
	void Ask();
	void WriteAll();
	void Write();
	~DataRead();
};

