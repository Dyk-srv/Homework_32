#ifndef _STRUCTURES_H_
#define _STRUCTURES_H_
#include <string>

// Task 32.1 
struct arr {
	int* pointer = nullptr;
	int length = 0;
};

// Task 32.3 
struct route {
	std::string number;
	std::string type;
	std::string init_stop;
	std::string final_stop;
	double fare;
};

#endif	// _STRUCTURES_H_
