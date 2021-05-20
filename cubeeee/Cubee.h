#include<iostream>
using namespace std;
class Cubee
{
	friend int zedFartob(Cubee t);
private: int gverdi;
public:
	Cubee() {

	}
	Cubee(int gverdi) {
		this->gverdi = gverdi;
	}
	void setgverdi(int gverdi) {
		this->gverdi = gverdi;
	}
	int getgverdi() {
		return this->gverdi;
	}
	int zedfart() {
		return gverdi * gverdi * 6;
	}
	int fuzfart() {
		return gverdi * gverdi;
	}
};

