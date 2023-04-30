#include <iostream>
#include <string>
#include "Structures.h"
#include "Functions.h"

int main() {
	
	// 32.1. Dynamic array
	std::cout << "\t32.1. Dynamic array.\nEnter array length -> ";
	arr arr1;
	std::cin >> arr1.length;
	init(arr1);
	std::cout << "Generated array with length " << arr1.length << " filled with zeroes:\n";
	show(arr1);
	
	std::cout << "Enter a number to append to the array -> ";
	int n;
	std::cin >> n;
	app(arr1, n);
	std::cout << "Resulting array:\n";
	show(arr1);
	
	std::cout << "Enter array element index to show (from 0 to " << arr1.length - 1 << ") -> ";
	int index;
	std::cin >> index;
	if (index >= 0 && index < arr1.length)
		std::cout << "Array element with index " << index << ": " << el(arr1, index) << "\n\n";
	else
		std::cout << "Index is out range!\n\n";
	
	clear(arr1);


	// 32.2. String character replacement
	std::cout << "\t32.2. String character replacement.\nEnter any string:\n-> ";
	std::string str;
	std::cin.ignore();
	std::getline(std::cin, str);
	char ch1, ch2;
	std::cout << "Enter a character to be replaced -> ";
	std::cin >> ch1;
	std::cout << "Enter replacing character -> ";
	std::cin >> ch2;
	if (char_replace(str, ch1, ch2))
		std::cout << "Resulting string:\n" << str << "\n\n";
	else
		std::cout << "Character '" << ch1 << "' not found!" << "\n\n";
	

	// 32.3. Public transportation routes
	std::cout << "\t32.3. Public transportation routes.\n";
	route tram_15{ "15", "Tram", "Vtorchermet", "40 let VLKSM", 32 };
	route trolley_6{ "6", "Trolleybus", "Akademicheskaya", "Himmash", 32 };
	route bus_27{ "27", "Bus", "Mega", "ZhBI", 33 };
	std::cout << "Enter number of passengers -> ";
	int pass_num;
	std::cin >> pass_num;
	std::cout << "Choose a route:\n1 - " << tram_15.type << ' ' << tram_15.number << '\n' <<
		"2 - " << trolley_6.type << ' ' << trolley_6.number << "\n3 - " << bus_27.type << ' ' << bus_27.number << "\n-> ";
	int answer;
	std::cin >> answer;
	switch (answer) {
	case 1:
		show_route(tram_15);
		std::cout << "Full fare for " << pass_num << " passenger(s): " << full_fare(tram_15, pass_num) << " RUB\n";
		break;
	case 2:
		show_route(trolley_6);
		std::cout << "Full fare for " << pass_num << " passenger(s): " << full_fare(trolley_6, pass_num) << " RUB\n";
		break;
	case 3:
		show_route(bus_27);
		std::cout << "Full fare for " << pass_num << " passenger(s): " << full_fare(bus_27, pass_num) << " RUB\n";
		break;
	default:
		std::cout << "Route not found!\n";
	}
	
	return 0;
}