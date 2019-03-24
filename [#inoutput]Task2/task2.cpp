#include <iostream>
using namespace std;

int main()
{
    unsigned int counter = 0;
    cin>>counter;
    
    for (int i = 0; i<counter;i++)
    {
    	int buf1=0, buf2=0;
    	cin>>buf1>>buf2;
    	cout<<buf1+buf2<<endl;
	}
    return 0;
}
