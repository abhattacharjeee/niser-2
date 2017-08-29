#include <iostream>
using namespace std;

int main() {
	float x1,x2,x3,y1,y2,y3,A;
	cout<< "enter the abscissa of the first vertex of triangle=";
	cin>>x1;
	cout<< "enter the ordinate of the first vertex of triangle=";
	cin>>y1;
	cout<< "enter the abscissa of the second vertex of triangle=";
	cin>>x2;
	cout<< "enter the ordinate of the second vertex of triangle=";
	cin>>y2;
	cout<< "enter the abscissa of the third vertex of triangle=";
	cin>>x3;
	cout<< "enter the ordinate of the third vertex of triangle=";
	cin>>y3;
	A=(x1*(y2-y3))+(y1*(x3-x2))+((x2*y3)-(y2*x3));
	cout<<"area of the triangle="<<A;
	return 0;
	
}
