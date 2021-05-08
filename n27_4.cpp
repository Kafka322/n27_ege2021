#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("27-B_2.txt");
	int N;
	fin >> N;


	int max7 = 0;
	int  max2 = 0;
	int  max14 = 0;
	int max14_2 = 0;
	int maxval = 0;
	for (int i = 0; i < N; i++) {
		int value = 0;
		fin >> value;



		if (value % 14 == 0) {
			if (value > max14) {
				max14_2 = max14;
				max14 = value;
			}
			else {
				if (value > max14_2) {
					max14_2 = value;
				}
			}
		}
		else {
			if (value % 7 == 0 and value > max7) {
				max7 = value;
			}
			if (value % 2 == 0 and value > max2) {
				max2 = value;
			}
			if (maxval < value) maxval = value;
		}		
	}
	int v1, v2, v3;
	v1 = max7 * max2;
	v2 = max14 * max14_2;
	v3 = max14 * maxval;

	int otv = max(v1, v2);
	otv = max(otv, v3);
	cout << otv;
}
