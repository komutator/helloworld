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

myclass mc[10];

int main()
{

	mc[0].s = 5;
	mc[0].f = 7;

	a = 2;
	b = 3;
	c = a + b;          

    cout << "Hello, world! "<< c <<" "<<mc[0].s + mc[0].f<<endl;
//    system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}