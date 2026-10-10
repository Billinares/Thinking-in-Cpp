//: C02:Scopy.cpp
// Copy one file to another, a line at a time
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream in("sometext.txt"); // Open for reading
	ofstream out("sometext2.txt"); // Open for writing
	string s;
	while(getline(in, s)) // Discards newline char
		out << s << endl; // ...must add it back
} ///:~