#pragma once
#include "ISort.h"

#include <vector>

using namespace std;

class BubbleSort :public ISort {

private:

	vector<vector<double>> array;

public:

	void Sort(vector<vector<double>>& array, int size) override {

		for (int line = 0; line < size; line++) {

			for (int i = 0; i < array[line].size() - 1; i++) {

				for (int j = 0; j < array[line].size() - i - 1; j++) {

					this->comparison_counter++;

					if (abs(array[line][j]) > abs(array[line][j + 1])) {

						swap(array[line][j], array[line][j + 1]);

						this->swap_counter++;

					}

				}

			}
		}

	}
};
