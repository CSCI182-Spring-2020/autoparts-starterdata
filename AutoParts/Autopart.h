#pragma once

#include <iostream>
#include "BasePart.h"

using namespace std;

class AutoPart : public BasePart {
private:
	string _PartDescription = "";
	int _PartMaker = 0;
public:

	AutoPart(int, string, int);
	~AutoPart();
	void PrintPart();
};