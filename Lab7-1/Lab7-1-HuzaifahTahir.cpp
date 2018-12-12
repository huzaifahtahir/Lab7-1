#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readStuff();

int main() {

	readStuff();


}

void readStuff() {

	string months[2];
	int money[3];
	ifstream readFile;

	readFile.open("information.txt");

	if (readFile) {

		while (readFile >> months[0] >> months[1] >> money[0] >> money[1] >> money[2]) {
			

		}
	}


}
