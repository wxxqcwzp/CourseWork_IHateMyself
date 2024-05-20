#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Test {

public:

	vector<vector<double>> original_matrix;

	vector<vector<double>> bubble_sort_matrix;
	vector<vector<double>> selection_sort_matrix;
	vector<vector<double>> insertion_sort_matrix;
	vector<vector<double>> shell_sort_matrix;
	vector<vector<double>> quick_sort_matrix;

	pair<double,double> bubble_sort_results;
	pair<double,double> selection_sort_results;
	pair<double,double> insertion_sort_results;
	pair<double,double> shell_sort_results;
	pair<double,double> quick_sort_results;

	Test(vector<vector<double>> original_matrix,

		vector<vector<double>> bubble_sort_matrix,
		pair<double, double> bubble_sort_results,

		vector<vector<double>> selection_sort_matrix,
		pair<double, double> selection_sort_results,

		vector<vector<double>> insertion_sort_matrix,
		pair<double, double> insertion_sort_results,

		vector<vector<double>> shell_sort_matrix,
		pair<double, double> shell_sort_results,

		vector<vector<double>> quick_sort_matrix,
		pair<double, double> quick_sort_results):

		original_matrix(original_matrix),

		bubble_sort_matrix(bubble_sort_matrix),
		bubble_sort_results(bubble_sort_results),

		selection_sort_matrix(selection_sort_matrix),
		selection_sort_results(selection_sort_results),

		insertion_sort_matrix(insertion_sort_matrix),
		insertion_sort_results(insertion_sort_results),

		shell_sort_matrix(shell_sort_matrix),
		shell_sort_results(shell_sort_results),

		quick_sort_matrix(quick_sort_matrix),
		quick_sort_results(quick_sort_results) {}

};