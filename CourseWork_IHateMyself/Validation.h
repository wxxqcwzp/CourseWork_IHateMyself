#pragma once
#include <iostream>

using namespace std;

bool is_filepath_valid(string& filepath,int type);

int confirm_overwrite();

bool file_exists(string filename);