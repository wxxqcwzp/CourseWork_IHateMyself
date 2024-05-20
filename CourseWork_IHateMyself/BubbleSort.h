#pragma once
#include "ISort.h"

#include <vector>

using namespace std;

class BubbleSort :public ISort {
public:

	void Sort(vector<vector<double>> &matrix) override {

		for (int line = 0; line < matrix.size(); line++) {

			for (int i = 0; i < matrix[line].size() - 1; i++) {

				for (int j = 0; j < matrix[line].size() - i - 1; j++) {

					this->comparison_counter++;

					if (abs(matrix[line][j]) > abs(matrix[line][j + 1])) {

						swap(matrix[line][j], matrix[line][j + 1]);

						this->swap_counter++;

					}

				}

			}
		}

	}
};
