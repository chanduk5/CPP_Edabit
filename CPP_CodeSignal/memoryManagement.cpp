#include<iostream>
using namespace std;

class obj
{
private:
	int * x;
public:
	obj(int data)
	{
		x = &data;
		cout << "constructor is called\n";
	}

	~obj()
	{
		cout << "destructor is called\n";
	}

};

void memoryManagement(void)
{
	obj* data = new obj(5);

	delete data;
	data = nullptr;
}