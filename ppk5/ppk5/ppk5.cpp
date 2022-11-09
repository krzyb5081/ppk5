#include <iostream>
#include <vector>
#include "wektoryFactory.h"



int main() {
	std::vector<std::vector<double>> Matrix;

	buildVector(Matrix);
	printVector(Matrix);
	
	while (1) { }
	return 0;
}
