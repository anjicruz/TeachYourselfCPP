// Listing 9.5 Demonstrates passing by reference
#include <iostream>

using namespace std;
void swap(int x, int y);
int main()
{
    // using namespace std;
    int x = 5, y = 10;
    // same results on main
    cout << "Main. Before swap, x: " << x << " y: " << y << endl;
    swap(x, y);
    cout << "Main. After swap, x: " << x << " y: " << y << endl;
    return 0;
}

void swap(int x, int y) // Here is the swap function
{
    int temp;

    cout << "Swap. Before swap, x: " << x << " y: " << y << endl;
    /*The problem here is that x and y are being passed to swap() by value.That is, local
    copies were made in the function.These local copies were changed and then thrown
    away when the function returned and its local storage was deallocated.*/
    temp = x; //temp = 5
    x = y; // 5=10
    y = temp; // Swap.After swap, x : 10 y : 5
    cout << "Swap. After swap, x: " << x << " y: " << y << endl;
}/*
Main.Before swap, x: 5 y : 10
Swap.Before swap, x : 5 y : 10
Swap.After swap, x : 10 y : 5
Main.After swap, x : 5 y : 10*/
