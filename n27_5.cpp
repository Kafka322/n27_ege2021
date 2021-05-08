#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int main() {
	ifstream fin("27985_B.txt");
	int N;
	fin >> N;

	int max14 = 0;
	int max7 = 0;
	int max2 = 0;
	int max = 0;
	for (int i = 0; i < N; i++) {
		int value;
		fin >> value;
		if (value > max and max != max14) max = value;
		if (value % 7 == 0 and value > max7) max7 = value;
		if (value % 14 == 0 and value > max14) max14 = value;
		if (value % 2 == 0 and value > max2) max2 = value;
	}
	int v1 = max7 * max2;
	int v2 = max14 * max;
	cout << std::max(v1, v2);
}
