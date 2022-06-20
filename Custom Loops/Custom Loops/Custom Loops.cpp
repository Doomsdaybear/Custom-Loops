//Really easy project to do. Keeps party guests busy for a bit!
#include<iostream>
using namespace std;

void Looper() {
	int num;
	string text;
	cout << "Enter number of times you want to loop:" << endl;
	cin >> num;
	cout << "Enter text to be looped:" << endl;
	cin >> text;
	for (int i = 0; i < num; i++) {
		cout << text << endl;
	}
	Looper();
}

int main() {
	Looper();

	return 0;
}
