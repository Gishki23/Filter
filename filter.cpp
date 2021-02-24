#include "filter.h"
#include <iostream>

filter::filter(double* coeff, int size) {
	Coeff = coeff;
	Size = size;
}

std::vector<double> filter::output(double input[], int i_size) {
	std::vector<double> result;
	int index = 0;
	while (index < i_size) {
		double curVal = 0;
		for (int i = 0; i < Size; i++) {
			if (i <= index) {
				curVal += input[index - i] * Coeff[i];
			}
		}
		result.push_back(curVal);
		index++;
	}
	return result;
}

