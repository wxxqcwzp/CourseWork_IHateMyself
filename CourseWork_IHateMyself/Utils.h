#pragma once
#include <iostream>
#include <vector>

using namespace std;

void show_matrix(vector<vector<double>> array, int size, string message);

void show_table(vector<vector<string>>& table, int size, string message);

vector<vector<double>> set_user_input_matrix();

vector<vector<double>> set_random_input_matrix();

void clear_matrix(vector<vector<double>>& matrix);