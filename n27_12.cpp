#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("Текст.txt");
	vector<int> aliquot(160);
	vector<int> unaliquot(160);

	while (fin) {
		int value;
		fin >> value;

		if (value % 7 == 0) {
			int remainder = value / 160;
			if(aliquot[remainder] < value) 
				aliquot[remainder] = value;

		}
		else {
			int remainder = value / 160;
			if (unaliquot[remainder] < value)
				unaliquot[remainder] = value;

		}
	}

	int max71 = 0, max72 = 0;
	int ind71 = -1, ind72 = -1;
	for (int i = 0; i < 160; i++) {
		if (aliquot[i] > max71) {
			max72 = max71;
			max71 = aliquot[i];
			ind72 = ind71;
			ind71 = i;
		}
		else {
			if (aliquot[i] > max72) {
				max72 = aliquot[i];
				ind72 = i;
			}
		}
	}

	int max1 = 0, max2 = 0;
	int ind1 = -1, ind2 = -1;
	for (int i = 0; i < 160; i++) {
		if (unaliquot[i] > max1) {
			max2 = max1;
			max1 = unaliquot[i];
			ind2 = ind1;
			ind1 = i;
		}
		else {
			if (unaliquot[i] > max2) {
				max2 = unaliquot[i];
				ind2 = i;
			}
		}
	}

	int v = max71 * max72;

	int a = max71, b = max72;

	if (ind71 != ind1 and v < max71 * max1) {
		v = max71 * max1;
		b = max1;
	}
	if (ind71 != ind2 and v < max71 * max2) {
		v = max71 * max2;
		b = max2;
	}
	if (ind72 != ind1 and v < max72 * max1) {
		v = max72 * max1;
		a = max72;
		b = max1;
	}
	if (ind72 != ind2 and v < max72 * max2) {
		v = max72 * max2;
		a = max72;
		b = max2;
	}

	cout << a << " " << b;
}
