#pragma once

#include "ISort.h"

#include <vector>

class QuickSort : public ISort {

private:
    int partition(vector<double>& array, int low, int high) {

        double pivot = array[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {

            this->comparison_counter++;

            if (abs(array[j]) < abs(pivot)) {
                i++;

                this->swap_counter++;
                swap(array[i], array[j]);
            }
        }

        this->swap_counter++;
        swap(array[i + 1], array[high]);

        return i + 1;
    }

    void quickSort(vector<double>& array, int low, int high) {

        if (low < high) {

            int pi = partition(array, low, high);

            quickSort(array, low, pi - 1);
            quickSort(array, pi + 1, high);

        }

    }

public:
    void Sort(vector<vector<double>>& matrix) override {

        for (int line = 0; line < matrix.size(); line++) {

            quickSort(matrix[line], 0, matrix[line].size() - 1);

        }

    }
};
