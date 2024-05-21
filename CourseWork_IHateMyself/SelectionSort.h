#pragma once
#include "ISort.h"

#include <vector>

using namespace std;

class SelectionSort : public ISort {

public:

	void Sort(vector<vector<double>> &matrix) override {

		for (int line = 0; line < matrix.size(); line++) {

			for (int i = 0; i < matrix[line].size() - 1; i++) {

				int min_index = i;

				for (int j = i + 1; j < matrix[line].size(); j++) {

					this->comparison_counter++;

					if (fabs(matrix[line][min_index]) > fabs(matrix[line][j])) { min_index = j; }

				}

				if (min_index != i) {

					swap(matrix[line][i], matrix[line][min_index]);

					this->swap_counter++;

				}

			}
		}
	}
};
