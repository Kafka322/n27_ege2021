#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int main() {
	ifstream fin("27-B_demo.txt");
	int N;
	fin >> N;

	int sum = 0;
	int min_raz = 100000;
	for (int i = 0; i < N; i++) {
		int left, right;
		fin >> left >> right;
		
		sum += max(left, right);
		
		if (min_raz > abs(left - right) and abs(left - right) % 3 != 0) {
			min_raz = abs(left - right);
		}
		
	}
	if (sum % 3 != 0) {
		cout << sum; 
	}
	else {
		cout << sum - min_raz;
	}
}
