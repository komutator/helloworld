#include <iostream>
#include <cstdlib> // для system
using namespace std;
unsigned int a;
unsigned int b;
unsigned int c;
class myclass
{
	public:
	 int s,f;

};


int main()
{
	myclass mc;

	mc.s = 5;
	mc.f = 7;

	a = 2;
	b = 3;
	c = a + b;          

    cout << "Hello, world! "<< c << endl;
    system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}