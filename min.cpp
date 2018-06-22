#include <iostream>
using namespace std;
int main ()
{
	float b1,b2,b3,b4;
	cout <<"Nhap gia tri b1 ";cin>>b1;
	cout <<"Nhap gia tri b2 ";cin>>b2;
	cout <<"Nhap gia tri b3 ";cin>>b3;
	cout <<"Nhap gia tri b4 ";cin>>b4;
	float min=b1;
	if(min>b2)min=b2;
	if(min>b3)min=b3;
	if(min>b4)min=b4;
	cout <<"So be nhat la "<<min;
	return 0;
}
