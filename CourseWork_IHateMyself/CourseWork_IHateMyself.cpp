#include "Utils.h"
#include "Validation.h"
#include "Files.h"
#include "Run_sorts.h"

#include <iostream>

int main()
{

    system("chcp 65001");
    system("cls");
    srand(time(nullptr));

    vector<vector<double>> matrix{ {3,2,1},{3,2,1},{3,2,1} };
    vector<vector<string>> results = { {"balls","kanye"},{"cock","west"}};

    results = run_sorts(matrix);
    save_matrix(matrix, results);
}

