#include <iostream>
#include "Show_menu.h"

using namespace std;

void show_greeting() {

	cout << "Gaponyako Fedor Dmitrievich; group 4307; number 5" << endl;
	cout << "Course work." << endl << endl;


	cout << "Create a console program to sort an array using:" << endl;
	cout << "bubble sort, selection sort, insertion sort, shell sort, and quicksort." << endl;
	cout << "Display the unordered array once, and then display the ordered arrays for each sorting method." << endl;
	cout << "Also, create a comparative table showing the efficiency of each sorting method," << endl;
	cout << "including the number of comparisons and variable swaps." << endl << endl;

	cout << "The unordered matrix of N rows and M columns is inputted once" << endl;
	cout << "(from the keyboard, file, or generated randomly) and is then used for each sorting method." << endl << endl;

}

void show_menu() {

	cout << "1 - Set matrix by user input;" << endl;
	cout << "2 - Set matrix by random input;" << endl;
	cout << "3 - Set matrix by file input;" << endl;
	cout << "4 - Show your matrix;" << endl;
	cout << "5 - Run sorts;" << endl;
	cout << "6 - Save matrix;" << endl;
	cout << "7 - Save results;" << endl;
	cout << "8 - Run tests;" << endl;
	cout << "9 - Exit;" << endl;

}