#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main() {
	int N;
	ifstream fin("28130_B.txt");
	fin >> N;


	vector<int> bol50(80);
	vector<int> men50(80);

	int val;
	for(int i = 1; i < N; i++) {
		
		fin >> val;
		int temp = val % 80;

		if (val > 50)
		{
			bol50[temp]++;
		}
		else {
			men50[temp]++;
		}
		
	}
	

	int sum = 0;

	sum += (bol50[0] * (bol50[0] - 1)) / 2;
	sum += (bol50[40] * (bol50[40] - 1)) / 2;
	for (int i = 1; i < 40 ;i++) {
		sum += (bol50[i] * bol50[80 - i]);
	}

	sum += (bol50[0] * men50[0]);

	for (int i = 1; i < 80; i++) {
		sum += men50[i] * bol50[80 - i];
	}

	cout << sum;
}
