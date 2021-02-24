#ifndef FILTER_H
#define FILTER_H
#include <vector>

class filter {
public:
	filter(double* coeff, int size);
	std::vector<double> output(double input[], int i_size); //outputs a vector of based on the filter coefficients and input data
private:
	double* Coeff;
	int Size;

};







#endif // !FILTER_H

