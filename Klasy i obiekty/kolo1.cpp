#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class CKolo{
	private: float mR,mO,mP;
	private: float obliczPole(){
		mP = (pow(mR,2))*3.14;
		return mP;
	}
	private: float obliczObwod(){
		mO = 2*3.14*mR;
		return mO;
	}
	public: void wypiszDane(){
		obliczObwod();
		obliczPole();
		cout << "Pole: " << mP << endl;
		cout << "Obwod: " << mO << endl;
		cout << "Promien: " << mR << endl;
	}
	public: void ustawR(float r){
		mR = r;
	}
	public: void podajPole(){
		cout << "Pole: " << mP << endl;
	}
	public: void podajObwod(){
		cout << "Obwod: " << mO << endl;
	}
};

int main(){
	CKolo kolo1;
	float promien;
	cout << "Podaj promien: ";
	cin >> promien;
	kolo1.ustawR(promien);
	cout << "Funkcja wypiszDane(): " << endl;
	kolo1.wypiszDane();
	cout << "Funkcja podajPole(): " << endl;
	kolo1.podajPole();
	cout << "Funkcja podajObwod(): " << endl;
	kolo1.podajObwod();
}
