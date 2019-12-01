#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class CZbiornik{
	private: float mA,mB,mC,mV;
	private: float obliczV(){
		mV = mA*mB*mC;
	}
	public: void wypiszDane(){
		obliczV();
		cout << "Bok a: " << mA << endl;
		cout << "Bok b: " << mB << endl;
		cout << "Bok c: " << mC << endl;
		cout << "Objetosc: " << mV << endl;
	}
	public: void ustawA(float a){
		mA = a;
	}
	public: void ustawB(float b){
		mB = b;
	}
	public: void ustawC(float c){
		mC = c;
	}
	public: void podajV(){
		obliczV();
		cout << "Objetosc: " << mV << endl;
	}
};
int main(){
	CZbiornik zbior1;
	float a,b,c;
	cout << "Podaj a,b i c: ";
	cin >> a >> b >> c;
	zbior1.ustawA(a);
	zbior1.ustawB(b);
	zbior1.ustawC(c);
	cout << "Funkcja wypiszDane: " << endl;
	zbior1.wypiszDane();
	cout << "Funkcja podajV: " <<  endl;
	zbior1.podajV();  
}
