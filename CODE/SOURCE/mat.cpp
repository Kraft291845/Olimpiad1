#include <iostream>

using namespace std;

int main() {

	int A, B;

	cout << "Entry A: ";
	cin >> A;

	cout << "Entry B: ";
	cin >> B;

	int n = 0;
	float result;

	while (true) {

		result = A - n * (n+1) / 2;

		if (result < B) {
			cout << "RESULT: " << result << endl;
			break;
		}
		
		n += 1;
	}


	return 0;
}