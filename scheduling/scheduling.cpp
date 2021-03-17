
#include <iostream>
#include "hw3.h"

int main()
{
	std::vector<Job> jobs{
		std::make_tuple(3,8,100,"A"),
		std::make_tuple(2,6,59,"B"),
		std::make_tuple(3,9,40,"C"),
		std::make_tuple(2,5,30,"D")
	};
	// print maximum duration
	int max = 0;
	for (auto& j : jobs)
		if (std::get<0>(j) > max)
			max = std::get<0>(j);
	std::cout << "maximum duration is " << max << "\n";
	//print job with maximum profit
	int duration, deadline;
	float profit,max_profit=0;
	std::string name;
	for (auto& j : jobs) {
		std::tie(duration, deadline, profit, name) = j;
		if (max_profit < profit)max_profit = profit;
	}
	std::cout << "maximum profit is " << max_profit << "\n";
	//print name, profit using c++17 structured binding
	for (auto& [d, de, p, n] : jobs)
		std::cout << "job " << n << " has profit " << p << "\n";

	/* most of the time the functionality you are looking for
	* is already implemented in the STL, use it, don't reinvent the wheel
	* and almost always it is better than your own implementation.
	* Example 1: finding the maximum deadline
	*/
	auto compare = [](Job& a, Job& b) {
		return std::get<1>(a) < std::get<1>(b);
	};
	auto p = std::max_element(jobs.begin(), jobs.end(), compare);
	std::cout<<"Max deadline is " << std::get<1>(*p)<<"\n";

	// Example 2: sorting the jobs by deadline
	/*std::sort(jobs.begin(), jobs.end(), compare);
	for (auto& [d, de, p, n] : jobs)
		std::cout << "name " << n << " deadline " << de << "\n";*/
	auto dp_s = dp_solve(jobs);
	for (int i = 0; i < dp_s.rows(); ++i) {
		for (int j = 0; j < dp_s.cols(); ++j)
			std::cout << dp_s[i][j] << ",";
		std::cout << "\n";
	}
	auto list = dp_jobs(dp_s, jobs);
	for (auto& j : list)
		std::cout << std::get<3>(j) << ",";
	std::cout << "\n";
}
