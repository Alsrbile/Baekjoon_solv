#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int a, b, c, diagonal = 0;
	queue<int>x, y, z;

	while (1)
	{
		cin >> a >> b >> c;
		if (a + b + c == 0) break;
		x.push(a);
		y.push(b);
		z.push(c);

	}


	while (1) {
		if (x.empty() == true) break;

		a = x.front();
		x.pop();
		b = y.front();
		y.pop();
		c = z.front();
		z.pop();


		if (a > b) {
			if (c > a) {
				diagonal = c;
				if (diagonal * diagonal == (a * a + b * b))
					cout << "right" << endl;
				else
					cout << "wrong" << endl;
			}
			else {
				diagonal = a;
				if (diagonal * diagonal == (c * c + b * b))
					cout << "right" << endl;
				else
					cout << "wrong" << endl;
			}
		}
		else {
			if (b > c) {
				diagonal = b;
				if (diagonal * diagonal == (a * a + c * c))
					cout << "right" << endl;
				else
					cout << "wrong" << endl;
			}
			else {
				diagonal = c;
				if (diagonal * diagonal == (a * a + b * b))
					cout << "right" << endl;
				else
					cout << "wrong" << endl;
			}
		}
	}

	return 0;
}