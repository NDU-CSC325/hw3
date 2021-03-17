// sequence-aligment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "hw3.h"
int main()
{
	//std::string X = "GDACG";
	//std::string Y = "DCA";
	std::string X = "ACG";
	std::string Y = "CA";
	float alpha = 7;
	float alpha_gap = 3;
	auto m = sequence_al(X, Y,alpha,alpha_gap);
	/*for (int i = 0; i < m.rows(); ++i) {
		for (int j = 0; j < m.cols(); ++j) {
			std::cout << m[i][j] << ",";
		}
		std::cout << "\n";
	}*/
	std::cout << m << "\n";
	/*auto [solX,solY] = sa_solY(m, X, Y,alpha,alpha_gap);
	for (auto& c : solX)
		std::cout << c;
	std::cout << "\n";
	for (auto& c : solY)
		std::cout << c;
	std::cout << "\n";*/
}
