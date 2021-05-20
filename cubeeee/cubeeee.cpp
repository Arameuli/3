#include <iostream>
#include"Cubee.h"
using namespace std;
int main()
{
	Cubee t(10);
	cout <<"gverdi= "<< t.getgverdi() << endl;
	cout << t.fuzfart() << " " << t.zedfart() << endl;
	int c = rand() % 10;
	t.setgverdi(c);
	cout << "gverdi = " << c << endl;
	cout << t.fuzfart() << " " << t.zedfart() << endl;
	if (c < 10) {
		c = 10;
	}
	t.setgverdi(c);
	cout << t.fuzfart() << " " << t.zedfart();

	
}
