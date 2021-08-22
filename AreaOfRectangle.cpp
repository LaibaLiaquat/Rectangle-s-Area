#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	cout << "Enter the length of Rectangle:\n";
	cin >> length;
	cout << "Enter the width of Rectangle:\n";
	cin >> width;
	area = length * width;
	cout << "Area of Rectangle is:" << area << endl;
	return 0;
}