// C03:gotoKeyword.cpp
// The infamous goto is supported in C++

#include <iostream>
using namespace std;

int main() {
	long val = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i < 1000; i++) {
		for (j = 1; j < 100; j += 10) {
			val = i * j;
			if (val > 47000) {
				goto bottom;
				//break;
			}
			// Break would only go to the outer 'for'
			// because it only breaks the inner 'for' and i 
			// keeps increasing on every loop. It would keep
			// increassing till 999 at which point j would reach 51:
			// 999 x 51 = 50949
			// Using goto: 517 x 91 = 47047
		}
	}
bottom: // A label
cout << i << endl;
cout << j << endl;
cout << val << endl;
}///:~