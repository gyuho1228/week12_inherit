// DougFO Play Jan. 19, 2022
#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
#include "FF.h"
using namespace std;
int main() {
	animal a;
	human b;
	bird c;
	fish d;
	a.eat();
	b.eat();
	c.eat();
	b.walk();
	c.fly();
	cout << " b " << b.nLegs << "\n";
	d.swim();
	d.eat();
	return 123;
}
