#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Test {

public:

	vector<vector<double>> original_matrix;
	vector<vector<double>> expected_sorted_matrix;

	pair<int, int> bubble_sort_expected_results;
	pair<int, int> selection_sort_expected_results;
	pair<int, int> insertion_sort_expected_results;
	pair<int, int> shell_sort_expected_results;
	pair<int, int> quick_sort_expected_results;

	Test(vector<vector<double>> original_matrix,
		vector<vector<double>> expected_sorted_matrix,

		pair<int, int> bubble_sort_expected_results,
		pair<int, int> selection_sort_expected_results,
		pair<int, int> insertion_sort_expected_results,
		pair<int, int> shell_sort_expected_results,
		pair<int, int> quick_sort_expected_results):

		original_matrix(original_matrix),
		expected_sorted_matrix(expected_sorted_matrix),

		bubble_sort_expected_results(bubble_sort_expected_results),
		selection_sort_expected_results(selection_sort_expected_results),
		insertion_sort_expected_results(insertion_sort_expected_results),
		shell_sort_expected_results(shell_sort_expected_results),
		quick_sort_expected_results(quick_sort_expected_results)

	{}

};