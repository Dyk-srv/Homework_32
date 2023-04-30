#include "Functions.h"
#include <iostream>

// Task 32.1 
void init(arr& array) {
	if (array.pointer != nullptr)
		return;
	array.pointer = new int[array.length] {};
}

void show(const arr& array) {
	std::cout << '[';
	for (int i = 0; i < array.length; i++)
		std::cout << array.pointer[i] << ", ";
	std::cout << "\b\b]\n";
}

void app(arr& array, int num) {
	int* tmp = new int[array.length + 1];
	for (int i = 0; i < array.length; i++)
		tmp[i] = array.pointer[i];
	tmp[array.length] = num;
	delete[] array.pointer;
	array.pointer = tmp;	
	array.length++;
}

void clear(arr& array) {
	delete[] array.pointer;
	array.pointer = nullptr;
	array.length = 0;
}

// Task 32.2 
bool char_replace(std::string& str, char ch1, char ch2) {
	if (str.find(ch1) == std::string::npos)
		return false;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ch1)
			str[i] = ch2;
	return true;
}

// Task 32.3 
void show_route(const route& rt) {
	std::cout << "\tRoute details:\n";
	std::cout << "Type:         " << rt.type << '\n';
	std::cout << "Route Nr:     " << rt.number << '\n';
	std::cout << "Initial stop: " << rt.init_stop << '\n';
	std::cout << "Final stop:   " << rt.final_stop<< '\n';
	std::cout << "Fare:         " << rt.fare << " RUB\n";
}
