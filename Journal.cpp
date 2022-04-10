#include<iostream>
#include<fstream>
#include <string>
#include<chrono>
#include "date/date.h"


using namespace std;
using std::cout; using std::cin; using std::endl;

auto GetSystemTime() {
	return date::format("%F", std::chrono::system_clock::now());
}



int main() {

	system("color a");




	char y, n;
	string filename, name, entry;

	do {


		cout << "*******PLEASE END YOUR FILE NAME WITH A .TXT************\n";
		cout << "Enter the Journal name: ";
		cin >> filename;
		cout << "Write in your journal: \n";
		cin >> entry;

		ofstream file(filename);						//opening and naming the file.

		//inputfilename.open(filename);					//open the input file
		getline(cin, entry);					//getline to allow string to be written into file.

		file << GetSystemTime() << '\n' << entry << '\n';			//write the information to the file
		file.close();



		cout << "Would you like to add another Journal Entry? (y/n):  \n";
		cin >> y;

	} while (y == 'y' || y == 'Y');


	cout << "Press any key to end.";

	cin.ignore(1);



}