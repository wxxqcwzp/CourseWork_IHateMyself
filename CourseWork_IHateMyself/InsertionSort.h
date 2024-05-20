#pragma once

#include "ISort.h"

#include <vector>

using namespace std;

class InsertionSort : public ISort {
public:

	void Sort(vector<vector<double>>& matrix) override {

		for (int line = 0; line < matrix.size(); line++) {

			for (int i = 1; i < matrix[line].size(); i++) {

				for (int j = i; j > 0; j--) {

					this->comparison_counter++;
					if (abs(matrix[line][j - 1]) <= abs(matrix[line][j])) { break; }

					this->swap_counter++;
					swap(matrix[line][j - 1], matrix[line][j]);

				}
			}
		}
	}
};