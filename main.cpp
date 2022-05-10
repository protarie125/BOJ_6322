#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	auto ct = int{ 1 };
	while (true) {
		if (0 == a && 0 == b && 0 == c) {
			break;
		}

		cout << "Triangle #" << ct << '\n';

		if (-1 == a) {
			auto temp = c * c - b * b;
			if (temp <= 0) {
				cout << "Impossible.\n";
			}
			else {
				cout << "a = " << fixed << setprecision(3) << sqrt(temp) << '\n';
			}
		}
		else if (-1 == b) {
			auto temp = c * c - a * a;
			if (temp <= 0) {
				cout << "Impossible.\n";
			}
			else {
				cout << "b = " << fixed << setprecision(3) << sqrt(temp) << '\n';
			}
		}
		else {
			auto temp = a * a + b * b;
			cout << "c = " << fixed << setprecision(3) << sqrt(temp) << '\n';
		}

		cout << '\n';
		cin >> a >> b >> c;
		++ct;
	}

	return 0;
}