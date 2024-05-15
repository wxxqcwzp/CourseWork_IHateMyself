#include "Input.h"

#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

enum type{ READ = 1, SAVE };
enum save_type { OVERWRITE = 1, ADD, ANOTHER };

bool is_filepath_valid(string& filepath, int type) {

    if (filepath.size() < 4 || filepath.substr(filepath.size() - 4) != ".txt") {
        cerr << "Invalid file extension" << endl;
        return false;
    }

    switch (type)
    {
        case(READ): {
            ifstream file(filepath);
            if (!file) {
                cerr << "File doesn't exis" << endl;
                return false;
            }
            file.close();
            break;
        }
        case(SAVE): {
            if (filesystem::status(filepath).permissions() == filesystem::perms::owner_write) {
                cerr << "Writing to file is prohibited" << endl;
                return false;
            }
            break;
        }
    }

    return true;
}

int confirm_overwrite() {

    cout << "File already exists." << endl;
    cout << "1 - Overwrite file;" << endl;
    cout << "2 - Add to file;" << endl;
    cout << "3 - Choose another file;" << endl;

    return InputInt("Choose menu item:", 0, 4);

}

bool file_exists(string filepath) { return filesystem::exists(filepath); }