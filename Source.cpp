#include <iostream>

using namespace std;

int main()
{

	int a, b, P;

	cout << "Korisnikot da vnese vrednost na strana a : ";
		cin >> a;

		cout << "Korisnikot da vnese vrednost na strana b : ";
		cin >> b;

		P = 2 * a + 2 * b;

		cout << "Perimetarot na pravoagolnikot so stranite " << a << " i " << b << " e : "  << P << endl;
		
	cin.get(); cin.get();

	return 0;
}