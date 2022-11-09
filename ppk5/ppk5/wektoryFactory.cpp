#include "wektoryFactory.h"

void getSize(int& size, std::string getSizePrompt) {
	std::cout << getSizePrompt << std::endl;
	std::cin >> size;
}

void printVector(const std::vector<std::vector<double>>& matrix) {
	for (const auto& dbleVector : matrix) {
		for (const auto dble : dbleVector) {
			std::cout << dble << " ";
		}
		std::cout << std::endl;
	}
}

void buildVector(std::vector<std::vector<double>>& matrix) {

	int sizeY, sizeX;

	getSize(sizeY, "Liczba wierszy: ");
	getSize(sizeX, "Liczba kolumn: ");

	matrix = std::vector<std::vector<double>>(sizeY);

	for (auto& dbleVector : matrix) {
		dbleVector = std::vector<double>(sizeX);
		for (auto& dble : dbleVector) {
			std::cin >> dble;
		}
	}
}