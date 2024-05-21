#include "Test_class.h"
#include "ISort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "QuickSort.h"

#include <vector>

using namespace std;

bool is_equal(vector<vector<double>> original_matrix,
	vector<vector<double>> expected_sorted_matrix,
	pair<double, double> bubble_sort_expected_results,
	pair<double, double> selection_sort_expected_results,
	pair<double, double> insertion_sort_expected_results,
	pair<double, double> shell_sort_expected_results,
	pair<double, double> quick_sort_expected_results) {

	BubbleSort bubble_sort;
	SelectionSort selection_sort;
	InsertionSort insertion_sort;
	ShellSort shell_sort;
	QuickSort quick_sort;

	vector<vector<double>> matrix_for_bubble_sort = original_matrix;
	vector<vector<double>> matrix_for_selection_sort = original_matrix;
	vector<vector<double>> matrix_for_insertion_sort = original_matrix;
	vector<vector<double>> matrix_for_shell_sort = original_matrix;
	vector<vector<double>> matrix_for_quick_sort = original_matrix;


	bubble_sort.Sort(matrix_for_bubble_sort);
	selection_sort.Sort(matrix_for_selection_sort);
	insertion_sort.Sort(matrix_for_insertion_sort);
	shell_sort.Sort(matrix_for_shell_sort);
	quick_sort.Sort(matrix_for_quick_sort);

	if ((expected_sorted_matrix == matrix_for_bubble_sort) &&
		(expected_sorted_matrix == matrix_for_selection_sort) &&
		(expected_sorted_matrix == matrix_for_insertion_sort) &&
		(expected_sorted_matrix == matrix_for_shell_sort) &&
		(expected_sorted_matrix == matrix_for_quick_sort) &&
		(bubble_sort_expected_results.first == bubble_sort.get_swap_counter() && bubble_sort_expected_results.second == bubble_sort.get_comparison_counter()) &&
		(selection_sort_expected_results.first == selection_sort.get_swap_counter() && selection_sort_expected_results.second == selection_sort.get_comparison_counter()) &&
		(insertion_sort_expected_results.first == insertion_sort.get_swap_counter() && insertion_sort_expected_results.second == insertion_sort.get_comparison_counter()) &&
		(shell_sort_expected_results.first == shell_sort.get_swap_counter() && shell_sort_expected_results.second == shell_sort.get_comparison_counter()) &&
		(quick_sort_expected_results.first == quick_sort.get_swap_counter() && quick_sort_expected_results.second == quick_sort.get_comparison_counter())) {



		bubble_sort.reset_counters();
		selection_sort.reset_counters();
		insertion_sort.reset_counters();
		shell_sort.reset_counters();
		quick_sort.reset_counters();

		return true;
	}
	
}


void run_tests() {

	vector<Test> tests{

		Test(

			{ {15,14,13,12,11},
			 {10,9,8,7,6},
			 {5,4,3,2,1} },

			{ {11,12,13,14,15},
			 {6,7,8,9,10},
			 {1,2,3,4,5} },

			make_pair(30, 30), make_pair(6, 30), make_pair(30, 30), make_pair(12, 24), make_pair(24, 30)
		),

		Test(

			{ {-15,-14,-13,-12,-11},
			  {-10,-9,-8,-7,-6},
			  {-5,-4,-3,-2,-1} },

			{ {-11,-12,-13,-14,-15},
			  {-6,-7,-8,-9,-10},
			  {-1,-2,-3,-4,-5} },

			make_pair(30, 30), make_pair(6, 30), make_pair(30, 30), make_pair(12, 24), make_pair(24, 30)

		),
		Test(
		
			{{-15,14,-13,12,-11},
			{10,-9,8,-7,6},
			{-5,4,-3,2,-1}},

			{ {-11,12,-13,14,-15},
			  {6,-7,8,-9,10},
			  {-1,2,-3,4,-5} },

			make_pair(30, 30), make_pair(6, 30), make_pair(30, 30), make_pair(12, 24), make_pair(24, 30)
			
		),

	};

	bool passed = true;

	for (auto& test : tests) {

		if (!is_equal(test.original_matrix, test.expected_sorted_matrix,
			test.bubble_sort_expected_results, test.selection_sort_expected_results,
			test.insertion_sort_expected_results, test.shell_sort_expected_results, test.quick_sort_expected_results)) {

			passed = false;
		}
	}

	if (passed) { cout << "All tests passed successfully" << endl; }
	else { cout << "Tests passed unsuccessfully" << endl; }


}