## Homework 3

## Problem 1 (30 pts)

Write your implementation of the subset sum problem.

1. (20pts) You are given a set of integers (```std::vector<int>```) and a sum _S_. Implement
the  function 
```cpp
Matrix<bool> subset_sum(const std::vector<int>& A, const int S)
```
that returns the dynamic programming solution as discussed in class.

2. (10pts) __if__ a solution exists, use the above result to return the actual numbers that add up to the sum _S_ by implementing the function

```cpp
std::vector<int> ss_sol(Matrix<bool>& m,std::vector<int>& A,const int sum)
```

## Problem 2 (30 pts)

Write your implementation of the sequence alignment problem.
1. (20pts) You are given two strings _X_ and _Y_. Implement the function

```cpp
Matrix<float>  sequence_al(std::string X, std::string Y,float alpha,float alpha_gap) 
```
that returns the minimal cost of alignment matrix as discussed in class.

2. (10pts) Use the above result to return the modified (i.e. the gaps "-" included) _X_ and _Y_ that produce the minimal cost by implementing the function
```cpp
std::pair<std::list<char>,std::list<char>>
sa_solX(Matrix<float> sol, std::string X, std::string Y,float alpha,float alpha_gap);
 ```


## Problem 3 (40 pts)
 
You have _n_ tasks to perform. Each task _i_ has a duration _t<sub>i</sub>_ , a deadline _d<sub>i</sub>_ and if you perform the task by the  deadline you earn a profit _p<sub>i</sub>_, otherwise you don't get any profit. As an example

|Name | Duration | Deadline | Profit|
|---  |  ---     |     ---   |    ---|
|A    | 1        | 2        | 70|
|B    | 1        | 1        | 23|
| C    | 1      | 2         | 27 |
| D     | 1     | 1         |25 |
|E      | 1     |3          |15|


Clearly in the above example, to earn the maximum profit you would schedule task 
C from 0 to 1 then task A from 1 to 2 and finally task E from 2 to 3. Your total
earning would be 112


When the duration of all tasks is one unit time, as in the example above, there is
an optimal greedy strategy. If the duration is not a unit time for all the tasks the greedy strategy does not always give the optimal solution. 

1. (30pts) Design a dynamic programming strategy to obtain a solution that maximizes the profit. Write your code in the function 

```cpp
Matrix<float> dp_solve(std::vector<Job>& jobs) 
```
The function `dp_solve` should return the profit table for the optimal solution.


2. (10pts) Use the previous result to implement the function 
```cpp
std::list<Job> dp_jobs(Matrix<float>& sol,std::vector<Job>& jobs) 	
```
that returns the actual tasks scheduled to run obtained from the optimal solution. 
