#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int n;
	double x, y = 0, e;

	cout << "Введите X: ";
	cin >> x;
	cout << "Введите N: ";
	cin >> n;
	cout << "Введите E: ";
	cin >> e;

	double x_n = pow(x, n);
	int k = 1;
	double t_y = 1 / k * x_n;

	while (abs(t_y - y) > e)
	{
		y = t_y;

		x_n /= x;
		k++;
		t_y += 1 / k * x_n;
	}

	cout << "Y(" << x << ") = " << y << "\n";

	system("pause");
}
