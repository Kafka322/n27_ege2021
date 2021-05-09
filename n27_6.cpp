#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int main() {
	ifstream fin("27986_B.txt");
	

	int max7 = 0;
	int max = 0;
	while (fin) {
		int value;
		fin >> value;
		
		if (value % 7 == 0 and value % 49 != 0 and value > max7) max7 = value;
		if (value % 7 != 0 and value > max) max = value;
	}

	cout << max7 * max;
}
