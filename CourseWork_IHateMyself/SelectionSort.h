#pragma once
#include "ISort.h"

#include <vector>

using namespace std;

class SelectionSort : public ISort {

public:

	void Sort(vector<vector<double>>& array, int size) override {

		for (int line = 0; line < size; line++) {

			for (int i = 0; i < array[line].size() - 1; i++) {

				int min_index = i;

				for (int j = i + 1; j < array[line].size(); j++) {

					this->comparison_counter++;

					if (abs(array[line][min_index]) > abs(array[line][j])) { min_index = j; }

				}

				if (min_index != i) {

					swap(array[line][i], array[line][min_index]);

					this->swap_counter++;

				}

			}
		}
	}
};
