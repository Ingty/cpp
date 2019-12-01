#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class CPomiar{
	private: float mTemp[5],mWiatr[5],mOpad[5],mTemp2,mWiatr2,mOpad2;
	private: void liczSrednia(){
		for(int i=0;i<5;i++){
			mTemp2+=mTemp[i];
			mWiatr2+=mWiatr[i];
			mOpad2+=mOpad[i];
		}
		mTemp2=mTemp2/5;
		mWiatr2=mWiatr2/5;
		mOpad2=mOpad2/5;
	}
	public: void ustawTemp(){
		for(int j=0;j<5;j++){
			cout << "Wprowadz wartosc temperatury nr. " << j+1 << " :";
			cin >> mTemp[j];
		}
	}
	public: void ustawWiatr(){
		for(int k=0;k<5;k++){
			cout << "Wprowadz wartosc wiatru nr. " << k+1 << " :";
			cin >> mWiatr[k];
		}
	}
	public: void ustawOpad(){
		for(int l=0;l<5;l++){
			cout << "Wprowadz wartosc opadow nr. " << l+1 << " :";
			cin >> mOpad[l];
		}
	}
	public: void wypiszDane(){
		liczSrednia();
		for(int m=0;m<5;m++){
			cout << m+1 << ". Temp: " << mTemp[m] << " Wiatr: " << mWiatr[m] << " Opad: " << mOpad[m] << endl;
		}
		cout << "Srednie: " << endl;
		cout << "Temperatura: " << mTemp2 << endl;
		cout << "Opady: " << mOpad2 << endl;
		cout << "Wiatr: " << mWiatr2 << endl;
	}
	public: void wypiszSrednia(){
		liczSrednia();
		cout << "Srednie: " << endl;
		cout << "Temperatura: " << mTemp2 << endl;
		cout << "Opady: " << mOpad2 << endl;
		cout << "Wiatr: " << mWiatr2 << endl;
	}
	
};
int main(){
	CPomiar pomiary;
	cout << "Wprowadz temperatury: " << endl << endl;
	pomiary.ustawTemp();
	cout << "Wprowadz opady: " << endl << endl;
	pomiary.ustawOpad();
	cout << "Wprowadz wiatr: " << endl << endl;
	pomiary.ustawWiatr();
	cout << "Funkcja wypiszDane: " << endl << endl;
	pomiary.wypiszDane();
	cout << "Funkcja wypiszSrednia: " << endl << endl;
	pomiary.wypiszSrednia();
}
