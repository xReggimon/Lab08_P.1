#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str) {
	return str.length();
}

int main() {

	string str;
	cout << "Enter a word or number: ";
	getline(cin, str);

	cout << "Number of characters: " << countCharacter(str) << endl;

	return 0;	
}