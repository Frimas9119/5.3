#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = s(sqrt(r)+1) - s(sqrt(r) + 1) *s(sqrt(r) + 1);
		cout << r << " " << z << endl;
		r += dr;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1)
		return (1+pow(x,2)+sqrt(abs(sin(x)))) / (pow(sin(2*pow(x,2)),2)+1);
	else
	{
		double S, A, B;
		int i = 0;
		int resi=1, resk=1;
		int k = 1;
		for (i = 0; i <= 5; i++) {
			resi *=  i;
		}
		i = 0;
		while (i <= 5) {
			
				A = pow(x, i) / resi;
				i++;
		}
		for (k = 1; k <= 6; k++) {
			resk *= k;
		}
		while (k <= 6) {

			B = pow(x, k) / resk;
			i++;
		}
		S = A + B;
		return S;
	}
}