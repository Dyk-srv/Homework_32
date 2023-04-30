#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#include "Structures.h"
#include <string>

// Task 32.1 
void init(arr& array);
void show(const arr& array); 

inline int el(const arr& array, int index) {
	return array.pointer[index];
}

void app(arr& array, int num);
void clear(arr& array);

// Task 32.2 
bool char_replace(std::string& str, char ch1, char ch2);

// Task 32.3 
void show_route(const route& rt);

inline double full_fare(const route& rt, int pass_num) {
	return (pass_num * rt.fare);
}

#endif	// _FUNCTIONS_H_
