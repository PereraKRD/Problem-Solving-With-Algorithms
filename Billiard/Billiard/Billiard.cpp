
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, s, m, n;

	while (true) {

		cin >> a >> b >> s >> m >> n;

		if (a + b + s + m + n < 0.5) {
			break;
		}
		else {
			double vx = (m * a) / s;
			double vy = (n * b) / s;

			double v = sqrt((vx * vx) + (vy * vy));


			cout << fixed;
			cout << setprecision(2);

			cout << (atan(vy / vx) * 180) / 3.1415 << " " << v << endl;
		}
	}
}
