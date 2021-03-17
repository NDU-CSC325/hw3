#include <vector>
#include <list>
#include <utility>
#include <string>
#include <algorithm>

/* Matrix class */
template <typename T>
class Matrix {
private:
	T* p;
	int _rows, _cols;
public:
	Matrix(int n = 2, int m = 2) :_rows(n), _cols(m) {

		p = new T[n * m]{};
	}
		
	T* operator[](int i) const {
		return &p[i*_cols];
	}
	int rows() const {
		return _rows;
	}
	int cols() const {
		return _cols;
	}
	bool operator==(const Matrix<T>& rhs) const {
		if(_rows!=rhs._rows || _cols!=rhs._cols)return false;
		for(int i=0;i<_rows;++i)
			for(int j=0;j<_cols;++j)
				if(p[i*_cols+j]!=rhs.p[i*_cols+j])return false;
		return true;
	}
};
template<typename T>
std::ostream& operator<<(std::ostream& os,const Matrix<T>& m){
	for(int i=0;i<m.rows();++i){
		os << "[";os.flush();
		for(int j=0;j<m.cols()-1;++j){
			os<<m[i][j]<<",";
		}
		os<<m[i][m.cols()-1]<<"]\n";
	}
	return os;
}

/* end Matrix class and utilities */

/* Problem 1 */
/* subset sum solution matrix using dynamic programming */
Matrix<bool> subset_sum(const std::vector<int>& A, const int S) {

	return Matrix<bool>{};
}
/* actual solution of subset sum, if it exists, using dynamic programming */
std::vector<int> ss_sol(Matrix<bool>& m,std::vector<int>& A,const int sum){
	return std::vector<int>{};
  }

/* Problem 2 */
/* sequence alignment matrix using dynamic programming */
Matrix<float>  sequence_al(std::string X, std::string Y,float alpha,float alpha_gap) {
	return Matrix<float>{};
}


std::pair<std::list<char>,std::list<char>>
sa_sol(Matrix<float> sol, std::string X, std::string Y,float alpha,float alpha_gap) {
	std::list<char> solX;
	std::list<char> solY;
	return std::make_pair(solX, solY);
}
/* Problem 3 */
// duration,deadline,profit,name

using Job = std::tuple<int, int, float, std::string>;

/* job scheduling with deadline matrix solution */
Matrix<float> dp_solve(std::vector<Job>& jobs) {

	return Matrix<float>{};
}

/* list of jobs that give the optimal profit*/
std::list<Job> dp_jobs(Matrix<float>& sol, std::vector<Job>& jobs) {

	std::list<Job> res;
	return res;
}