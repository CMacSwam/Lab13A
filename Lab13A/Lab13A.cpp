#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream in_File;
	string filename;
	cout << "Enter file name: ";
	cin >> filename;
	in_File.open(filename);

	if (in_File.fail()) cout << "Cannot read from " << filename << endl;


}