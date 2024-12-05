#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

void pressEnterToContinue(void);

int main() {
	ifstream in_File;
	string filename;
	cout << "Enter file name: ";
	cin >> filename;
	in_File.open(filename);

	if (in_File.fail()) cout << "Cannot read from " << filename << endl;

	char ch;
	char compare;
	int counterLetters = 0;

	while (!in_File.eof()) {
		in_File.get(ch);
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
			counterLetters++;
		}
	}
	in_File.close();

	cout << "Total number of letters: " << counterLetters << endl;
	cout << "Frequency: " << endl;



	int upperAscii = 65;
	int lowerAscii = 97;

	for (int i = 0; i < 26; i++) {
	
		in_File.open(filename);
		int characters=0;
		compare = upperAscii;

		while (!in_File.eof()) {

			in_File.get(ch);
			if (ch == upperAscii || ch == lowerAscii) {
				characters++;
			}

		}
		double percent = ((double) characters / counterLetters) * 100;
		cout << "'" << compare << "': " << fixed << setprecision(3) << percent << endl;
		upperAscii++;
		lowerAscii++;
		in_File.close();
		//continue;
	}

	pressEnterToContinue();
}
void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}
