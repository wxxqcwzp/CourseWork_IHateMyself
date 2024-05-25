#include "Input.h"

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double random(double min, double max) { return (min + static_cast<double>(rand()) / RAND_MAX * (max - min)); }

void show_matrix(vector<vector<double>> array, int size, string message) {

	if (array.empty()) { cout << "Your matrix is empty" << endl; return; }

	cout << message << endl << endl;

	cout << fixed << setprecision(2);

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < array[i].size(); j++) {

			cout << array[i][j] << '\t';

		}

		cout << endl;

	}

}

void show_table(vector<vector<string>>& table, int size, string message) {

	cout << message << endl << endl;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < table[i].size(); j++) {

			cout << table[i][j] << '\t';

		}

		cout << endl;

	}

}

vector<vector<double>> set_user_input_matrix() {

	int rows = InputInt("Enter number of matrix's rows:", 0, INT_MAX);

	int columns = InputInt("Enter number of matrix's columns:", 0, INT_MAX);

	vector<vector<double>> matrix(rows, vector<double>(columns));

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {

			cout << "Enter matrix[" << i << "][" << j << "]:";

			matrix[i][j] = InputDouble("", -DBL_MAX, DBL_MAX);
		}
	}

	return matrix;

}

vector<vector<double>> set_random_input_matrix() {

	int rows = InputInt("Enter number of matrix's rows:", 0, INT_MAX);
	int columns = InputInt("Enter number of matrix's columns:", 0, INT_MAX);

	double max = 0;
	double min = InputDouble("Enter minimal random value:", -DBL_MAX, DBL_MAX - 1);
	do { max = InputDouble("Enter maximum random value:", -DBL_MAX, DBL_MAX); } while (min >= max);
	

	vector<vector<double>> matrix(rows, vector<double>(columns));

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < columns; j++) {

			matrix[i][j] = random(min,max);
		}
	}

	return matrix;

}

void clear_matrix(vector<vector<double>>& matrix) {

	for (int i = 0; i < matrix.size(); i++) {

		matrix[i].clear();
	}

	matrix.clear();
}