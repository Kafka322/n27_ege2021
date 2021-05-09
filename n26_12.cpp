#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("28129_B.txt");
	int N;
	fin >> N;

	int m71 = 0, m72 = 0, m1 = 0, m2 = 0;
	for (int i = 0; i < N; i++) {
		int value = 0;
		fin >> value;

		if (value % 7 == 0) {
			if (value > m71) {
				m72 = m71;
				m71 = value;
			}
			else {
				if (value > m72) m72 = value;
			}
		}

		if (value % 7 != 0) {
			if (value > m1) {
				m2 = m1;
				m1 = value;
			}
			else {
				if (value > m2) m2 = value;
			}
		}		
	}

	//cout << m71 << " " << m72 << " " << m1 << " " << m2;

	if (m71 % 160 != m1 % 160) {
		cout << m71 << " " << m1;
	}
}
