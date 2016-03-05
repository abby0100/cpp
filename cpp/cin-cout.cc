#include <iostream>
int main() {

	int a = -1, b = 0;
	int c = 1, d = 2;
	std::cout << "Enter 8 numbers in cout stream" << std::endl;
	std::cout << "a=" <<  (std::cin >> a) << " and b=" << (std::cin >> b) << std::endl;
	std::cout << "c=" <<  (std::cin >> c) << " and d=" << (std::cin >> d) << std::endl;
	std::cout << "a=" <<  (std::cin >> a) << " and b=" << (std::cin >> b) << std::endl;
	std::cout << "c=" <<  (std::cin >> c) << " and d=" << (std::cin >> d) << std::endl;
	return 0;
}
