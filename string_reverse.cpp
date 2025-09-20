#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cout << "Enter string: ";
	getline(cin, s);
	string* s2 = new string(s);
	reverse(s2->begin(), s2->end());
	cout << "Reversed string: " << *s2 << endl;
	
	delete s2;
	while (true);
	return 0;
}