#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

//ø = ›
//å = †
//æ = ‘

using namespace std;

string timemin;

bool tid(int x, int y);
int framidnatt(int x, int y);

int main() {

	int time;
	int min;
	char colon;
	char valg;

	while (true)
	{

		cout << "›VING 6 - 2B - SANT / USANT \n";
		cout << "<A> Oppgave \n";
		cout << "<B> Avslutt \n";

		cin >> valg;

		valg = toupper(valg);

		switch (valg)
		{
		case 'A':
			cout << "Skriv inn antall timer og minutter på formen XX:YY \n";

			//getline(cin, timemin);

			//func(timemin);

			cin >> time >> colon >> min;

			cout << endl;



			if (tid(time, min)) {

				int tot;
				tot = framidnatt(time, min);

				cout << "Du skrev: " << time << ":" << min << "\n";
				cout << "Det er " << tot << " minutter fra midnatt \n";

				}
				else{
					cout << "Feil input, prøv igjen\n\n\n";
					
				}

			

			break;
		case 'B':
			exit(0);
			break;
		default:
			cout << "Pr›v igjen\n\n";
			break;
		}


	}


	system("PAUSE");

	return 0;
}


int framidnatt(int x, int y) {
	
	int z;

	z = (x * 60) + y;

	return z;
}

bool tid(int x, int y)
{
	//bool res;

	if (x < 23 && y < 59) {

		int time = 24;
		int min = 60;

		time -= x;
		min -= y;

		
		return true;
		
		//res = true;
	}
	/*else {
		res = false;
	}*/

	return false;
}
