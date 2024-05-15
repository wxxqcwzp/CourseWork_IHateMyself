#pragma once

#include "ISort.h"

#include <vector>

using namespace std;

class ShellSort : public ISort {

public:

	void Sort(vector<vector<double>>& array, int size) override {

		for (int line = 0; line < size; line++) {

			for (int gap = array[line].size() / 2; gap > 0; gap /= 2) {

				for (int i = gap; i < array[line].size(); i++) {

					for (int j = i; j >= gap; j -= gap) {

						this->comparison_counter++;
						if (abs(array[line][j - gap]) <= abs(array[line][j])) { break; }

						swap(array[line][j - gap], array[line][j]);
						this->swap_counter++;

					}
				}
			}
		}
	}
};