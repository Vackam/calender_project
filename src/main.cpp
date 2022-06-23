#include <iostream>
#include <ctime>
using namespace std;



int main() {

	time_t now = time(NULL);
	struct tm* t = localtime(&now);
	cout << t->tm_mon + 1 << endl;
	cout << "Hello, World!" << endl;
}
