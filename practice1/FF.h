#pragma once
#include "ani.h"
class fish : public animal {
public:
	fish() { nFin = 5;}
	int nFin;

	void swim();
};
