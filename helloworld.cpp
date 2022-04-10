#include <iostream>
#include <cstdlib> // для system
using namespace std;
unsigned int a;
unsigned int b;
unsigned int c;

int main()
{
	a = 2;
	b = 3;
	c = a + b;          

    cout << "Hello, world! "<< c << endl;
    system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}