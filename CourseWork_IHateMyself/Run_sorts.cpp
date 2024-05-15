#include "ISort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "QuickSort.h"
#include "Utils.h"


#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<string>> run_sorts(vector<vector<double>>& matrix) {

    vector<vector<string>> results{};

    if (matrix.empty()) { return results; }

    BubbleSort bubble_sort;
    SelectionSort selection_sort;
    InsertionSort insertion_sort;
    ShellSort shell_sort;
    QuickSort quick_sort;

    vector<vector<double>> array_for_bubble_sort = matrix;
    vector<vector<double>> array_for_selection_sort = matrix;
    vector<vector<double>> array_for_insertion_sort = matrix;
    vector<vector<double>> array_for_shell_sort = matrix;
    vector<vector<double>> array_for_quick_sort = matrix;

    show_matrix(matrix, matrix.size(), "Original matrix:");

    cout << endl;


    /*------------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------------
    --------------------------------------------BUBBLE SORT-------------------------------------------------
    --------------------------------------------------------------------------------------------------------
    ------------------------------------------------------------------------------------------------------*/

    bubble_sort.Sort(array_for_bubble_sort, array_for_bubble_sort.size());

    show_matrix(array_for_bubble_sort, array_for_bubble_sort.size(), "Matrix sorted by bubble sort:");

    cout << endl;

    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------BUBBLE SORT-------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/






    /*---------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------
    -------------------------------------------SELECTION SORT--------------------------------------------
    -----------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/


    selection_sort.Sort(array_for_selection_sort, array_for_selection_sort.size());

    show_matrix(array_for_selection_sort, array_for_selection_sort.size(), "Matrix sorted by selection sort:");

    cout << endl;

    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------SELECTION SORT----------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/




    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------INSERTION SORT----------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/


    insertion_sort.Sort(array_for_insertion_sort, array_for_insertion_sort.size());

    show_matrix(array_for_insertion_sort, array_for_insertion_sort.size(), "Matrix sorted by insertion sort:");

    cout << endl;

    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------INSERTION SORT----------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/




    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------SHELL SORT--------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/


    shell_sort.Sort(array_for_shell_sort, array_for_shell_sort.size());

    show_matrix(array_for_shell_sort, array_for_shell_sort.size(), "Matrix sorted by shell sort:");

    cout << endl;

    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------SHELL SORT--------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/





    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------QUICK SORT--------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/

    quick_sort.Sort(array_for_quick_sort, array_for_quick_sort.size());

    show_matrix(array_for_quick_sort, array_for_quick_sort.size(), "Matrix sorted by quick sort:");

    cout << endl;


    /*-----------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -------------------------------------------QUICK SORT--------------------------------------------------
    -------------------------------------------------------------------------------------------------------
    -----------------------------------------------------------------------------------------------------*/


    results = {

        { "Algotithm", "Swaps", "Compares"},
        { "Bubble sort", to_string(bubble_sort.get_swap_counter()), to_string(bubble_sort.get_comparison_counter()) },
        { "Selection sort", to_string(selection_sort.get_swap_counter()), to_string(selection_sort.get_comparison_counter()) },
        { "Insertion sort", to_string(insertion_sort.get_swap_counter()), to_string(insertion_sort.get_comparison_counter()) },
        { "Shell sort", to_string(shell_sort.get_swap_counter()), to_string(shell_sort.get_comparison_counter()) },
        { "Quick sort", to_string(quick_sort.get_swap_counter()), to_string(quick_sort.get_comparison_counter()) }

    };

    show_table(results, results.size(), "Results:");

    bubble_sort.reset_counters();
    selection_sort.reset_counters();
    insertion_sort.reset_counters();
    shell_sort.reset_counters();
    quick_sort.reset_counters();

    cout << "------------------------------------------------------------" << endl;

    return results;

}