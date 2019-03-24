#include <iostream>
using namespace std;

#define MAX(x, y, r) {int x_ = (x); int y_ = (y); int r_ = (x_<y_?y_:x_); r = r_;}

int main()
{
	int x = 10;
	int y = 20;
	int r = 0;
	MAX(x += y, y, r);
	cout<<r<<endl;
	return 0;
}
