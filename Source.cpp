#include <iostream>
using namespace std;


string encrypt(string plaintext, int shift) {
	string result = "";

	for (int i = 0; i < plaintext.length(); i++) {
		//for uppercase
		if (isupper(plaintext[i])) {
			result += char(int(plaintext[i] + shift - 65) % 26 + 65);
		}

		else
			result += char(int(plaintext[i] + shift - 97) % 26 + 97);
	}

	return result;

}

int main() {
	string plaintext = "Eleven";
	int shift = 7;
	cout << "Input:" << plaintext;
	cout << "shift_no" << shift;
	cout << "output:" << encrypt(plaintext, shift);
	return 0;
}