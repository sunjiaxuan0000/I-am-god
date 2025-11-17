#include <iostream>
#include <vector>
using namespace std;
vector<int> factors;
void findperfectnumber(int a) {
	int b = 0;
	for (int i = 1; i < a / 2+1; i++) {
		if (a % i == 0) {
			factors.push_back(i);
			b += i;
		}
		if (a == b) {
			cout << a << "its factors are";
			for (int x : factors) {
				cout << x << "";
			}
			cout << endl;
		}
		else{
			return;
		}
	}
}
int main() {
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		factors.clear();
		findperfectnumber(i);
	}
	system("pause");
		return 0;
}
