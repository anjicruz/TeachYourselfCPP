// Listing 9.5 Demonstrates passing by reference
#include <iostream>

using namespace std;
void swap(int *x, int *y); // On line 5, the prototype of swap() is changed to indicate that its two parameters will be pointers to int rather than int variables.
int main()
{
    // using namespace std;
    int x = 5, y = 10;

    cout << "Main. Before swap, x: " << x << " y: " << y << endl; 
    swap(&x, &y); // When swap() is called on line 12, the addresses of x and y are passed as the arguments.You can see that the addresses are passed because the address - of operator (&) is being used.
    cout << "Main. After swap, x: " << x << " y: " << y << endl;
    return 0;
}

void swap(int* px, int* py)
{
    int temp; // On line 19, a local variable, temp, is declared in the swap() function.temp need not be a pointer; it will just hold the value of *px(that is, the value of x in the calling function) for the life of the function.After the function returns, temp is no longer needed. // the pointers from Swap. Before swap are the same from Main. Before swap
    cout << "Swap. Before swap, *px: " << *px << " *py: " << *py << endl;

    temp = *px; // On line 22, temp is assigned the value at px.
    *px = *py; // On line 23, the value at px is assigned to the value at py.
    *py = temp;  // On line 24, the value stashed in temp(that is, the original value at px) is put into py.The net effect of this is that the values in the calling function, whose address was passed to swap(), are, in fact, swapped.
    cout << "Swap. After swap, *px: " << *px << " *py: " << *py << endl;
}/*
Main.Before swap, x: 5 y : 10
Swap.Before swap, * px : 5 * py : 10
Swap.After swap, * px : 10 * py : 5
Main.After swap, x : 10 y : 5*/

