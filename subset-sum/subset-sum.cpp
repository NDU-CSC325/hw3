/*****************************************************************//**
 * @file   subset-sum.cpp
 * @brief	solution to the subset sum problem
 *			using dynamic programming 
 * @author Hikmat Farhat
 * @date   March 2021
 *********************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include "hw3.h"

int main()
{
	const int set_size = 14;
	std::random_device e;
	std::uniform_int_distribution<> id(1, 50);
	for (int t = 0; t< 10; ++t) {
		std::vector<int> set;

		for (int i = 0; i < set_size; ++i) {
			set.push_back(id(e));
		}
		int sum = id(e) * id(e) / 2;
		Matrix<bool> solution = subset_sum(set, sum);
		std::cout << "Set| Sum\t ";
		for (auto& x : set) {
			std::cout << x << ",";
		}
		std::cout << "| " << sum << std::endl;
		if (solution[set.size()][sum] == true) {
			std::vector<int> solution_set = ss_sol(solution, set, sum);
			std::cout << "Solution\t";
			for (auto& x : solution_set) {
				std::cout << x << ",";
			}
			std::cout << std::endl;
		}
		else {
			std::cout << "Solution\t {}\n";
		}
		std::cout << "-----------------------\n";
	}
}
