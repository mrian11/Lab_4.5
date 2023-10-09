#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (pow(y, 2) <= pow(R, 2) - pow(x, 2) && (y >= 0 && x >= 0) ||
			pow(y, 2) >= pow(R, 2) - pow(x, 2) && (y <= 0 && x <= 0) ||
			(y <= R + x) && (x <= 0 && y >= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = R * R * rand() / RAND_MAX - R;
		y = R * R * rand() / RAND_MAX - R;
		if (pow(y, 2) <= pow(R, 2) - pow(x, 2) && (y >= 0 && x >= 0) ||
			pow(y, 2) >= pow(R, 2) - pow(x, 2) && (y <= 0 && x <= 0) ||
			(y <= R + x) && (x <= 0 && y >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}