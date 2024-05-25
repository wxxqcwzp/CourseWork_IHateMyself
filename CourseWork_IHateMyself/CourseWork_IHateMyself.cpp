#include "Utils.h"
#include "Validation.h"
#include "Files.h"
#include "Run_sorts.h"
#include "Input.h"
#include "Show_menu.h"
#include "ISort.h"
#include "Tests.h"

#include <iostream>


enum menu { SET_MATRIX_UI = 1, SET_MATRIX_RI, SET_MATRIX_FI, SHOW_MATRIX, RUN_SORTS, SAVE_MATRIX, SAVE_RESULTS, RUN_TESTS, EXIT };

int main()
{

    system("chcp 65001");
    system("cls");
    srand(time(NULL));
    show_greeting();

    vector<vector<double>> matrix;
    vector<vector<string>> results;

    int user_choice = 0;
    bool repeat = true;

    do {

        show_menu();
        user_choice = InputInt("Enter menu item:", 0, 10);
    
        switch (user_choice)
        {
        
        case(SET_MATRIX_UI): { matrix = set_user_input_matrix(); break; }

        case(SET_MATRIX_RI): { matrix = set_random_input_matrix(); break; }

        case(SET_MATRIX_FI): { matrix = set_matrix_from_file(); break; }

        case(SHOW_MATRIX): { show_matrix(matrix, matrix.size(), "Your matrix:"); break; }

        case(RUN_SORTS): { results = run_sorts(matrix); break; }

        case(SAVE_MATRIX): { save_only_matrix(matrix); break; }

        case(SAVE_RESULTS): { save_results(matrix, results); break; }

        case(RUN_TESTS): { run_tests(); break; }

        case(EXIT): { repeat = false; break; }

        }
    
    } while (repeat);
}

