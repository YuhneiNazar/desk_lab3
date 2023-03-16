#include <iostream>
using namespace std;

void zav1();
void zav2();


int main()
{
	cout << "Zavdannya 1:" << endl;
	zav1();
	cout << "Zavdannya 2:" << endl;
	zav2();

}

void zav1() {

	 int n = 5, r = 4;
	double P1, P2, A;
	P1 = 1;
	P2 = 1;
	for (int i = 1; i <= n; i++)
	{
		P1 = P1 * i;
	}

	for (int i = 1; i <= n - r; i++)
	{
		P2 = P2 * i;
	}
	A = P1 / P2;
	cout << "Rezultat = " << A << endl;
}

void zav2() {
	int n, i;

	cout << "Vvedit variant: "; cin >> i;
	n = i + 5;

	int j, k;

	//Striling
	int F[100][100];

	for (int j = 1; j <= n; j++) {
		F[j][1] = 1;
		F[j][j] = 1;
	}
	for (int j = 3; j <= n; j++) {
		for (int k = 2; k < j; k++) {
			F[j][k] = F[j - 1][k - 1] + k * F[j - 1][k];
		}
	}

	//Bell
	int B[100];

	for (int j = 1; j <= n; j++) {
		B[j] = 0;
		for (int k = 1; k <= j; k++) {
			B[j] += F[j][k];
		}
	}

	// output
	cout << "Stirling numbers:" << endl;
	for (int j = 1; j <= n; j++) {
		for (int k = 1; k <= j; k++) {
			cout << F[j][k] << " ";
		}
		cout << endl;
	}
	cout << "Bell numbers:" << endl;
	for (int j = 1; j <= n; j++) {
		cout << B[j] << " ";
	}
	cout << endl;
}