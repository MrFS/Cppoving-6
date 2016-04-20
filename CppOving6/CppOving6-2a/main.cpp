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

//int func(string x);

int main() {

	int time;
	int min;
	char colon;
	char valg;

	while (true)
	{

		cout << "›VING 6 - 2a - TID \n";
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

			if (time > 23) {
				cout << "Ugyldig antall timer, pr›v igjen! - 00-23 \n";
				break;
			}
			else {
				
				if (min > 59 && time < 23) {

					time += 1;
					min = min - 60;

				}
				/*else {

					cout << "Ugyldig input \n\n";

					break;
				}*/

				cout << "Din tid: " << time << ":" << min << "\n";

				cout << "Antall timer: " << time << "\n";

				cout << "Antall minutter: " << min << "\n\n";
				
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