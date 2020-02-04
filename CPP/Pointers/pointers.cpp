#include <iostream>
#define area(r) (3.14*r*r)

using namespace std;

int main(){
	int radius;
  	float area;
  	cout << "Enter radius of circle" << endl;
  	cin >> radius;
  	area = area(radius);
  	cout << "Area of circle is " << area << endl;
	return 0;
}
