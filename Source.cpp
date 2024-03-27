#include <iostream>
#include <string>

using namespace std;

bool trueVowel(char vowel) {
	return vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U';
}

int countVowel(string str) {
	int countVowel = 0;
	for (char vowel : str) {
		if (trueVowel(vowel)) {
			countVowel++;
		}
	}
	return countVowel;
}

int main() {

	string str;
	cout << "Enter a word or number: ";
	getline(cin, str);

	cout << "Number of vowels: " << countVowel(str) << endl;

	return 0;	
}