#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> set_matrix_from_file();

void save_results(vector<vector<double>> matrix, vector<vector<string>> results);

void save_only_matrix(vector<vector<double>> matrix);