#include "chocolateboiler.h"

ChocolateBoiler* ChocolateBoiler::uniqueInstance = NULL;

ChocolateBoiler::ChocolateBoiler() {
	empty = true;
	boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance() {
	if (uniqueInstance == NULL) {
		uniqueInstance = new ChocolateBoiler();
	}
	return uniqueInstance;
}

void ChocolateBoiler::fill() {
	if (isEmpty()) {
		empty = false;
		boiled = false;
		cout << "Zalivaem chocolate" << endl;
	}
}

void ChocolateBoiler::drain() {
	if (!isEmpty() && isBoiled()) {
		cout << "Slivaem nagretoe milk and chcolate" << endl;
		empty = true;
	}
}

void ChocolateBoiler::boil() {
	if (!isEmpty() && isBoiled()) {
		cout << "Kipyatim..." << endl;
		boiled = true;
	}
}

bool ChocolateBoiler::isEmpty() {
	return empty;
}

bool ChocolateBoiler::isBoiled() {
	return boiled;
}