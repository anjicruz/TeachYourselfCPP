// LISTING 8.7 Creating a Stray Pointer

typedef unsigned short int USHORT;
#include <iostream>

int main()
{ // using namespace std;;;
    USHORT * pInt = new USHORT;
    *pInt = 10;
    std::cout << "*pInt: " << *pInt << std::endl;
    delete pInt;

    long * pLong = new long;
    *pLong = 90000;
    std::cout << "*pLong: " << *pLong << std::endl;

    *pInt = 20; // this was deleted!

    std::cout << "*pInt: " << *pInt << std::endl;
    std::cout << "*pLong: " << *pLong << std::endl;
    delete pLong;
    return 0;
}/*
Output ▼
* pInt: 10
* pLong : 90000
* pInt : 20
* pLong : 65556
Do not try to re - create this output.Yours will differ if you are lucky, or your computer
will crash if you are not.
Analysis ▼
To repeat : This is a listing you should avoid running because it could lock up your
machine.On line 8, pInt is declared to be a pointer to USHORT, and is pointed to newly
allocated memory.On line 9, the value 10 is put into that memory allocated for pInt.
The value pointed to is printed on line 10. After the value is printed, delete is called on
the pointer.After line 11 executes, pInt is a stray, or dangling, pointer.
Line 13 declares a new pointer, pLong, which is pointed at the memory allocated by new.
On line 14, the value 90000 is assigned to pLong, and on line 15, this value prints.
It is on line 17 that the troubles begin.On line 17, the value 20 is assigned to the memory
that pInt points to, but pInt no longer points anywhere valid.The memory that pInt
points to was freed by the call to delete on line 11. Assigning a value to that memory is
certain disaster.
Stray, Wild, or Dangling Pointers 225
8
LISTING 8.7 Continued
On line 19, the value at pInt is printed.Sure enough, it is 20. Line 20 prints the value at
pLong; it has suddenly been changed to 65556. Two questions arise :
n How could pLong’s value change given that pLong wasn’t touched ?
n Where did the 20 go when pInt was used on line 17 ?
As you might guess, these are related questions.When a value was placed at pInt on line
17, the compiler happily placed the value 20 at the memory location that pInt previously
pointed to.However, because that memory was freed on line 11, the compiler was free to
reassign it.When pLong was created on line 13, it was given pInt’s old memory location.
(On some computers, this might not happen, depending on where in memory these
    values are stored.) When the value 20 was assigned to the location that pInt previously
    pointed to, it wrote over the value pointed to by pLong.This is called stomping on a
    pointer.It is often the unfortunate outcome of using a stray pointer.
    This is a particularly nasty bug because the value that changed wasn’t associated with the
    stray pointer.The change to the value at pLong was a side effect of the misuse of pInt.In
    a large program, this would be very difficult to track down.*/
