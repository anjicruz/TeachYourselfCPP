// Listing 8.6 - Creating objects on the free store
// using new and delete

#include <iostream>

using namespace std;

class SimpleCat
{
public:
    SimpleCat();
    ~SimpleCat();

private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Constructor called. " << endl;
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    cout << "Destructor called. " << endl;
}

int main()
{
    cout << "SimpleCat Frisky... " << endl;
    SimpleCat Frisky;
    cout << "SimpleCat *pRags = new SimpleCat..." << endl;
    SimpleCat* pRags = new SimpleCat;
    cout << "delete pRags... “" << endl;
    delete pRags;
    cout << "Exiting, watch Frisky go... " << endl;
    return 0;
}
//  Output ▼
// SimpleCat Frisky...
// Constructor called.
// SimpleCat *pRags = new SimpleCat..
// Constructor called.
// delete pRags...
// Destructor called.
// Exiting, watch Frisky go...
// Destructor called.
// Analysis ▼
// Lines 8–15 declare the stripped-down class SimpleCat. Line 11 declares SimpleCat’s
// constructor, and lines 17–21 contain its definition. Line 12 declares SimpleCat’s destructor,
// and lines 23–26 contain its definition. As you can see, both the constructor and
// destructor simply print a simple message to let you know they have been called.
// On line 31, Frisky is created as a regular local variable, thus it is created on the stack.
// This creation causes the constructor to be called. On line 33, the SimpleCat pointed to
// Deleting Objects from the Free Store 223
// 8
// LISTING 8.6 Continued
// by pRags is also created; however, because a pointer is being used, it is created on the
// heap. Once again, the constructor is called.
// On line 35, delete is called on the pointer, pRags. This causes the destructor to be called
// and the memory that had been allocated to hold this SimpleCat object to be returned.
// When the function ends on line 38, Frisky goes out of scope and its destructor is called.