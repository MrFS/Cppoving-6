#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;
int calculate(int x);
int calculate2(int x, int y);
int tid;
int fra;
int til;
int samtale;
int main() {
	cout << "›VING 6 - 2c \n";
	cout << "Skriv inn antall minutter etter midnatt da samtalen startet \n";
	cin >> fra;
	cout << "Skriv inn antall minutter etter midnatt da samtalen sluttet \n";
	cin >> til;
	samtale = til - fra;
	cout << "Samtalen varte i " << samtale << " minutter." << endl;
	cout << calculate2(fra, til) << endl;
	//cout << calculate(fra) << endl;

	cin.get();
	cin.get();
	return 0;
}
int calculate(int x) {
	int res;
	// 24 timer i døgnet * 60 min = 1440 timer
	// kl 8.00 = 480 min etter midnatt
	// kl 17.00 = 1020 min etter midnatt
	if (x >= 480 && x <= 1020) {
		res = x - 480;
		cout << "Dette blir " << res << " minutter med lavere takst og  " << x - res << "minutter med vanlig takst" << endl;
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
int calculate2(int x, int y) {
	int res;
	int vanlig;
	int redusert;
	if ((x >= 480 && x <= 1020) && (y >= 480 && y <= 1020)) {
		res = y - x;
		cout << "Dette blir " << res << " minutter med lavere takst" << endl;

	}
	else
	{
		res = y - x;

		cout << "Dette blir " << y - 480 << " minutter med lavere takst og " << 480 - x << " minutter med vanlig takst" << endl;
	}
	if ((x > 1020 && x < 1440) && (y > 1020 && y < 1440)) {
		res = y - x;
		cout << "Dette blir " << res << " minutter med vanlig takst" << endl;
	}
	if ((x > 0 && x < 480) && (y > 0 && y < 480)) {
		res = y - x;
		cout << "Dette blir " << res << " minutter med vanlig takst" << endl;
	}
	if (x > 1440 || y > 1440) {
		res = y - x;
		cout << "Ugyldig antall minutter" << endl;
	}
	return res;
}