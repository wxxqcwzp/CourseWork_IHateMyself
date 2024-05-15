#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> get_matrix_from_file(string filepath);

void save_matrix(vector<vector<double>> matrix, vector<vector<string>> results);
