#include<iostream>

using namespace std;

int main() {
	char input;
	int Light=0;
	int Dark=0;
	int Neutral=0;

	cout << "Hello! I must ask; where do your alliances typically lie? D; Dark side, tend to fight for a malicous goal. N; Neutral; you fight only for yourself. L; Light, you fight for what you believe is best for those around you." << endl;
	cin >> input;
	if (input == 'D') {
		Dark++;
	}
	else if (input == 'L') {
		Light++;
	}
	else if (input == 'N') {
		Neutral++;
	}

	cout << "Now, what color best embodies you? P; purple. Relatively neutral, can swing either way. B; blue. A lighter tone, shows strength of willpower. R; Red. Shows willingness to flaunt strengeth around, use of brute force." << endl;
	cin >> input;
	if (input == 'R') {
		Dark++;
	}
	else if (input == 'B') {
		Light++;
	}
	else if (input == 'P') {
		Neutral++;
	}


	cout << "In conclusion; What ability would you prefer to have? L; Shoot lightning from hands, fueled by anger and power. T; telekenisis, able to move stuff with mind. M; Mind trickery, avoiding conflict before it happens." << endl;
	cin >> input;
	if (input == 'L') {
		Dark++;
	}
	else if (input == 'M') {
		Light++;
	}
	else if (input == 'T') {
		Neutral++;
	}
	system("pause");


	if (Light > Dark && Light > Neutral) {
		cout << "You are a Jedi; keeper of the peace. You would lay down your life at any moment, for the good of another." << endl;
	}
	else if (Dark > Light && Dark > Neutral) {
		cout << "You are a Sith; you fight for a malicous cause, wanting to take the Galazy as your own. I can respect that lust for power." << endl;
	}
	else if (Neutral > Dark && Neutral > Light) {
		cout << "You walk a dangerous line, young one... be careful, as neutrality never lasts." << endl;
	}
	else {
		cout << "Your future is unclear..." << endl;
	}
	system("pause");
}