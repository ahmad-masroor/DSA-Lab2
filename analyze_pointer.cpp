#include <iostream>
using namespace std;

void analyze_pointer(int* ptr){
	cout << "Memory location pointed: " << ptr << endl;
	cout << "Value of Integer pointed: " << *ptr << endl;
}

int main() {
	int value = 20;
	analyze_pointer(&value);

	int *p = new int(50);
	analyze_pointer(p);

	while (true);
	return 0;
}
