#include "Utils.h"
#include "Input.h"
#include "Validation.h"
#include "BubbleSort.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

enum type{READ = 1,SAVE};
enum save_type{ OVERWRITE = 1, ADD, ANOTHER };

void save(vector<vector<double>> matrix, ofstream& output_file) {

    for (int i = 0; i < matrix.size(); i++) {

        for (int j = 0; j < matrix[i].size(); j++) {

            if (j == matrix[i].size() - 1) {
                output_file << matrix[i][j] << '\n';
            }else{ output_file << matrix[i][j] << ';'; }

        }

    }

    output_file << '\n' << '\n';

    BubbleSort bubble_sort;

    bubble_sort.Sort(matrix, matrix.size());

    for (int i = 0; i < matrix.size(); i++) {

        for (int j = 0; j < matrix[i].size(); j++) {

            if (j == matrix[i].size() - 1) {
                output_file << matrix[i][j] << '\n';
            }
            else { output_file << matrix[i][j] << ';'; }

        }

    }

    bubble_sort.reset_counters();

    output_file << '\n' << '\n';
    output_file.close();
}

vector<vector<double>> set_matrix_from_file() {

    vector<vector<double>> matrix;

    string filepath = InputString("Enter filepath (only txt available):");

    while (!is_filepath_valid(filepath,READ)) {
        filepath = InputString("Enter new filepath (only txt available):");
    }

    ifstream input_file(filepath);

    string line;
    while (getline(input_file, line)) {

        if (line.empty()) {

            cerr << "Warning: Skipped empty line." << endl;
            continue;

        }

        stringstream ss(line);
        string token;
        vector<double> row;

        while (getline(ss, token, ';'))
        {
            try { row.push_back(stod(token)); }

            catch (const exception& e) { cerr << "Warning: Parsing field: " << e.what() << endl; }

        }

        matrix.push_back(row);

    }

    input_file.close();

    for (int i = 0; i < matrix.size() - 1; i++) {

        if (matrix[i].size() != matrix[i + 1].size()) { clear_matrix(matrix); break; }

    }

    return matrix;

}

void save_matrix(vector<vector<double>> matrix, vector<vector<string>> results) {

    if (matrix.empty()) {

        cout << "You can`t save empty matrix" << endl;
        return;

    }

    if (results.empty()) {

        cout << "Íou need to run matrix sort" << endl;
        return;

    }

    bool is_saved = false;

    while (!is_saved) {
        string filepath = InputString("Enter filepath (only txt available):");

        while (!is_filepath_valid(filepath, SAVE)) {
            filepath = InputString("Enter new filepath (only txt available):");
        }
        if (!file_exists(filepath)) {

            ofstream output_file(filepath);

            save(matrix, output_file);


        }
        else {
            switch (confirm_overwrite())
            {
            case(OVERWRITE): {
                ofstream output_file(filepath);

                if (output_file.is_open()) {

                    save(matrix, output_file);

                    break;
                }
            }

            case(ADD): {

                ofstream output_file(filepath, ios::app);
                if (output_file.is_open()) {
                    
                    save(matrix, output_file);

                    break;
                }
            }

            case(ANOTHER): { continue; }
            }
        }

        ofstream output_file(filepath, ios::app);

        output_file << "Results:" << '\n';

        for (int i = 0; i < results.size(); i++) {

            for (int j = 0; j < results[i].size(); j++) {

                output_file << results[i][j] << '\t';

            }

            output_file << '\n';

        }

        output_file << '\n' << '\n';

        is_saved = true;
        output_file.close();

    }



}