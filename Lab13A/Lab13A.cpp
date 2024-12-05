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

	char ch;
	char compare;


	for (int i = 0; i <= 26; i++) {

		int counterLetters = 0;

		switch (i) {
		case 1: compare = 'A'; case 2:compare = 'B'; case 3:compare = 'C'; case 4:compare = 'D'; case 5:compare = 'E'; case 6:compare = 'F'; case 7:compare = 'G'; case 8:compare = 'H'; case 9:compare = 'I'; case 10:compare = 'J';
		case 11:compare = 'K'; case 12:compare = 'L'; case 13:compare = 'M'; case 14:compare = 'N'; case 15:compare = 'O'; case 16:compare = 'P'; case 17:compare = 'Q'; case 18:compare = 'R';  case 19:compare = 'S'; case 20:compare = 'T';
		case 21:compare = 'U'; case 22:compare = 'V'; case 23:compare = 'W'; case 24:compare = 'X'; case 25:compare = 'Y'; case 26:compare = 'Z';
		}
		while (!in_File.eof()) {

			in_File.get(ch);
			if (toupper(ch) == compare) {

			}

		}
	}
}