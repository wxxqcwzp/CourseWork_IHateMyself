#pragma once

#include "ISort.h"

#include <vector>

using namespace std;

class ShellSort : public ISort {

public:

	void Sort(vector<vector<double>> &matrix) override {

		for (int line = 0; line < matrix.size(); line++) {
			for (int gap = matrix[line].size() / 2; gap > 0; gap /= 2) {

				for (int i = gap; i < matrix[line].size(); i++) {

					for (int j = i; j >= gap; j -= gap) {

						this->comparison_counter++;
						if (abs(matrix[line][j - gap]) <= abs(matrix[line][j])) { break; }

						swap(matrix[line][j - gap], matrix[line][j]);
						this->swap_counter++;

					}
				}
			}
		}
	}
};