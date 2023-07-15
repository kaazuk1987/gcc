// C++ program for function overriding
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

class base {
public:
	virtual void print()
	
    {
		cout << "print base class" << endl;
	}

    virtual void printme(){cout<<"klasa bazowa virtual"<<endl;}

	void show() { cout << "show base class" << endl; }

};

class derived : public base {
public:
	// print () is already virtual function in
	// derived class, we could also declared as
	// virtual void print () explicitly
	void print() { cout << "print derived class" << endl; }
    void printme(){cout << "klasa derived dziedziczona"<<endl;}
	void show() { cout << "show derived class" << endl; }
};

// Driver code
int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	bptr->print();
    bptr->printme();
    cout<<endl<<"typ na ktory wskazuje bptr: "<< typeid(*bptr).name()<<endl;
	// Non-virtual function, binded
	// at compile time
	bptr->show();
    bptr->show();
//for git
	return 0;
}
