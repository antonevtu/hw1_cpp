#include "lib.h"

#include <iostream>

// commit 2
int main(int, char **) {
	std::cout << "Version: " << version() << std::endl;
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
