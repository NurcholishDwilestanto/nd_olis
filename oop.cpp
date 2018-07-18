//Program Kalkulator
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
class Kalkulator{
	private:
		int Bil1, Bil2, Hasil;
	public:
		char Pilih;
		Kalkulator();
		void tambah();
		void kurang();
		void kali();
		void bagi();
		void input(int, int,char);
		friend void tampil(Kalkulator Cl);
};
Kalkulator::Kalkulator(){
	Bil1=Bil2=Hasil=0;
}
void Kalkulator::input(int bil1, int bil2, char pilih){
	Bil1=bil1;
	Bil2=bil2;
	Pilih=pilih;
}

void Kalkulator::tambah(){
	Hasil=Bil1+Bil2;
}

void Kalkulator::kurang(){
	Hasil=Bil1-Bil2;
}

void Kalkulator::kali(){
	Hasil=Bil1*Bil2;
}

void Kalkulator::bagi(){
	Hasil=Bil1/Bil2;
}
void tampil(Kalkulator Cl){
	cout<<"Hasil dari: " <<Cl.Bil1 << Cl.Pilih<<Cl.Bil2<<"="<<Cl.Hasil;
	cout<<"\n";
}

int main(){
	Kalkulator kkl;
	int bil1, bil2;
	char pilih;
	cout<<"Masukan Bilangan pertama: ";
	cin >> bil1;
	cout<<"Masukan Bilangan kedua: ";
	cin >> bil2;
	cout<<"Masukan Operator[+,-,:,*]: ";
	cin >> pilih;
	kkl.input(bil1,bil2,pilih);
	
	switch (pilih){
		case '+':
		kkl.tambah();
		break;
		case '-':
		kkl.kurang();
		break;
		case '*':
		kkl.kali();
		break;
		case '/':
		kkl.bagi();
		break;
	}
	tampil(kkl);
	return (0);
}
