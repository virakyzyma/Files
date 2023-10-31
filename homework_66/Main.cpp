#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream in("index.html", ios::in);

	bool isValid = true;
	char previousCharacter = '\0';
	if (in.is_open()) {

		do
		{

			char character = '\0';

			in.get(character);

			if ((character == '>' && previousCharacter != '<') || (character == '<' && previousCharacter == '<')) {
				isValid = false;
				break;
			}

			if (character == '<') {
				previousCharacter = character;
			}

			if (character == '>') {
				previousCharacter = character;
			}

		} while (in);


		in.close();
	}
	else {
		cout << "File open error!" << endl;
	}

	if (isValid) cout << "HTML-file is valid." << endl;
	else cout << "HTML-File isn't valid." << endl;

	return 0;
}