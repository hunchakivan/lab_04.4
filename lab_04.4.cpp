#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double x, xp, xk, y, dx, R;

	cout << "R="; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -2)
			y = 3 + x;
		else
			if (x > -2 && x <= 4)
				y = 1 + ((-R - 1) / 6) * (x + 2);
			else
				if (x > 4 && x <= (8 - R))
					y = -R;
				else
					if (x > (8 - R) && x <= (8 + R))
						y = sqrt(pow(R, 2) - pow((x - 8), 2)) + R;
					else
						y = -R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}