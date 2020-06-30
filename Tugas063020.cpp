#include <iostream>
using namespace std;

void PersegiPanjang ( int m, int n ) {
	cout << ( m * n );
	}
	
void Persegi ( int o, int p ) {
	cout << ( o * p );
	}
	
void Balok ( int q, int r, int S ) {
	cout << ( q * r * S );
	}
	
void Kubus ( int s, int t, int u ) {
	cout << ( s * t * u );
	}
	
int main () {
	cout << "Rumus Luas Persegi Panjang = panjang(26) x lebar(11) => ";
	PersegiPanjang (26,11);
	cout << endl;
	cout << endl;
	cout << "Rumus Luas Persegi = sisi(10) x sisi(10) => ";
	Persegi (10,10);
	cout << endl;
	cout << endl;
	cout << "Rumus Volume Balok = panjang(20) x lebar(11) x tinggi(19) => ";
	Balok (20,11,19);
	cout << endl;
	cout << endl;
	cout << "Rumus Volume Kubus = sisi(26) x sisi(26) x sisi(26) => ";
	Kubus (26,26,26);
	cout << endl;
	
	return 0;	
}
