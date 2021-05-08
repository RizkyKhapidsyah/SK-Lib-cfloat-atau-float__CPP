// C++ program to demonstrate working
// of macros constants in cfloat library
// Source by GeeksForGeeks
// Modified for Learn by Rizky Khapidsyah

#include <cfloat>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	cout << "FLT_RADIX : " << FLT_RADIX << endl;
	cout << "FLT_DIG : " << FLT_DIG << endl;
	cout << "DECIMAL_DIG : " << DECIMAL_DIG << endl;
	cout << "FLT_MIN_10_EXP : " << FLT_MIN_10_EXP << endl;
	cout << "FLT_MAX_EXP : " << FLT_MAX_EXP << endl;
	cout << "FLT_MAX_10_EXP : " << FLT_MAX_10_EXP << endl;
	cout << "FLT_MAX : " << FLT_MAX << endl;
	cout << "FLT_MIN : " << FLT_MIN << endl;
	
	_getch();
	return 0;
}
