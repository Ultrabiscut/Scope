#include <iostream>
using namespace std;

//function prototypes
void shtuff();

//global variables
int iVal = 50;

//I, Tyler Timmins, pledge to not you use golobal variables
//as a substitution for passing parapeters to functions
// or as a substitution for returning values.

int main()
{
	//x is only accessiable in main
	int x = 5;	//x is local to main()
	int z = 3;

	//there is no y in main()
	//cout << y << endl;

	cout << "In main() iVal = " << iVal << endl;
	cout << "In main() z = " << z << endl;

	//call on shtuff()
	shtuff();


	return 0;
}

void shtuff()
{
	//Can't access x because there is no x declared in shtuff()
	//cout << x << endl;

	//y is only accessiable in shtuff()
	int y = 85;	//y is local to shtuff()
	int z = 21;

	cout << "In shtuff() iVal = " << iVal << endl;
	cout << "In shtuff() z = " << z << endl;

	z = 14;
	cout << "In shtuff() z = " << z << endl;
}