#pragma once

#include "ISort.h"

#include <vector>

using namespace std;

class InsertionSort : public ISort {

public:

	void Sort(vector<vector<double>>& array, int size) override {

		for (int line = 0; line < size; line++) {

			for (int i = 1; i < array[line].size(); i++) {

				for (int j = i; j > 0; j--) {

					this->comparison_counter++;
					if (abs(array[line][j - 1]) <= abs(array[line][j])) { break; }

					this->swap_counter++;
					swap(array[line][j - 1], array[line][j]);

				}
			}
		}
	}
};