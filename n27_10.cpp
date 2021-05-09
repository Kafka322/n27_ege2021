#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("27991_A.txt");
	int N;
	fin >> N;

	int max17_chet = 0, max17_notchet = 0, maxchet = 0, maxunchet = 0;
	for (int i = 0; i < N; i++) {
		int value = 0;
		fin >> value;
		
		if (value % 17 == 0 and value % 2 == 0 and value > max17_chet) max17_chet = value;
		if (value % 17 == 0 and value % 2 != 0 and value > max17_notchet) max17_notchet = value;
		if (value % 17 != 0 and value % 2 == 0 and value > maxchet) maxchet = value;
		if (value % 17 != 0 and value % 2 != 0 and value > maxunchet) maxunchet = value;

	}

	cout << max17_notchet <<  " " << maxunchet;
}
