#include <iostream>


using namespace std;




int main()
{
	float n, m, a, b, c;
	cin >> n;
	cin >> m;
	a = ++n * ++m;
	cout << a;

	cin >> n;
	cin >> m;
	b = m ++ < n;
	cout << b;

	cin >> n;
	cin >> m;
	c = n++ > m;
	cout << c;

}