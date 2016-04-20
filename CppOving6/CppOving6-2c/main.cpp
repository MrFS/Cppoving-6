#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;
int calculate(int x);
int tid;
int main() {
	while (true) {
		cout << "›VING 6 - 2c \n";

		cout << "Skriv inn antall minutter for samtaletid etter midnatt for å se takst \n>\n";

		cin >> tid;

		cout << calculate(tid) << endl;

		cout << "\n\n;";

		cin.get();
	}
}
int calculate(int x) {
	int res;

	// 24 timer i døgnet * 60 min = 1440 timer
	// kl 8.00 = 480 min etter midnatt
	// kl 17.00 = 1020 min etter midnatt

	if (x >= 480 && x <= 1020) {
		res = x - 480;

		cout << "Dette blir " << res << " minutter med lavere takst og  " << x - res << " minutter med vanlig takst" << endl;
	}
	if (x > 1020 && x < 1440) {
		res = x - 1020;
		cout << "Dette blir " << res << " minutter med vanlig takst" << endl;
	}

	if (x > 0 && x < 480) {
		res = x;
		cout << "Dette blir " << res << " minutter med vanlig takst" << endl;
	}
	if (x > 1440) {
		res = x;
		cout << "Ugyldig antall minutter" << endl;
	}

	return res;
}