#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Test {

public:

	vector<vector<double>> original_matrix;
	vector<vector<double>> expected_sorted_matrix;

	pair<double,double> bubble_sort_expected_results;
	pair<double,double> selection_sort_expected_results;
	pair<double,double> insertion_sort_expected_results;
	pair<double,double> shell_sort_expected_results;
	pair<double,double> quick_sort_expected_results;

	Test(vector<vector<double>> original_matrix,
		vector<vector<double>> expected_sorted_matrix,

		pair<double, double> bubble_sort_expected_results,
		pair<double, double> selection_sort_expected_results,
		pair<double, double> insertion_sort_expected_results,
		pair<double, double> shell_sort_expected_results,
		pair<double, double> quick_sort_expected_results):

		original_matrix(original_matrix),
		expected_sorted_matrix(expected_sorted_matrix),

		bubble_sort_expected_results(bubble_sort_expected_results),
		selection_sort_expected_results(selection_sort_expected_results),
		insertion_sort_expected_results(insertion_sort_expected_results),
		shell_sort_expected_results(shell_sort_expected_results),
		quick_sort_expected_results(quick_sort_expected_results)

	{}

};