#pragma once

#include <iostream>
#include <vector>

using namespace std;

class ISort {

protected:

	int swap_counter = 0;

	int comparison_counter = 0;

public:

	virtual void Sort(vector<vector<double>>& matrix) = 0;

	int get_swap_counter() { return swap_counter; }
	int get_comparison_counter() { return comparison_counter; }

	void show_counters() {

		cout << "Swaps: " << swap_counter << ';' << endl;
		cout << "Comparison:" << comparison_counter << ';' << endl;

	}

	void reset_counters() {

		swap_counter = 0;
		comparison_counter = 0;

	}

};
