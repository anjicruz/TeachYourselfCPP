// LISTING 10.3 Implementing the Methods of a Simple Class
// Demonstrates declaration of a class and definition of class methods
#include <iostream>
// Lines 5–13 contain the definition of the Cat class.Line 7 contains the keyword public, which tells the compiler that what follows is a set of public members.Line 8 has the declaration of the public accessor method GetAge().GetAge() provides access to the private member variable itsAge, which is declared on line 12. Line 9 has the public accessor function SetAge(). SetAge() takes an integer as an argument and sets itsAge to the value of that argument.
class Cat
{
public:
	int GetAge();
	void SetAge(int age);
	void Meow(); // Line 10 has the declaration of the class method Meow(). Meow() is not an accessor function; it is a general method that prints the word “Meow” to the screen.
private:
	int itsAge; // Line 11 begins the private section, which includes only the declaration on line 12 of the private member variable itsAge.
};
// Lines 15-21 contain the definition of the member function GetAge(). This method takes no parameters, and it returns an integer.Note on line 15 that class methods include the class name followed by two colons and the function name.This syntax tells the compiler that the GetAge() function you are defining here is the one that you declared in the Cat class.With the exception of this header line, the GetAge() function is created the same as any other function. The GetAge() function takes only one line; it returns the value in itsAge.Note that the main() function cannot access itsAge because itsAge is private to the Cat class.The main() function has access to the public method GetAge(). Because GetAge() is a member function of the Cat class, it has full access to the itsAge variable.This access enables GetAge() to return the value of itsAge to main().
int Cat::GetAge()
{
	return itsAge;
}
// Line 20 contains the definition of the SetAge() member function. You can see that this function takes one integer value, called age, and doesn’t return any values, as indicated by void.SetAge() takes the value of the age parameterand assigns it to itsAge on line 22. Because SetAge() is a member of the Cat class, it has direct access to the private member variable itsAge.
void Cat::SetAge(int age)
{
	itsAge = age;
}
// Line 24 begins the definition, or implementation, of the Meow() method of the Cat class. It is a one - line function that prints the word “Meow” to the screen, followed by a new line.Remember that the \n character prints a new line to the screen.You can see that Meow is set up just like the accessor functions in that it begins with the return type, the class name, the function name, and the parameters(none in this case).
void Cat::Meow()
{
	std::cout << "Meow.\n";
}

int main()
{
	Cat Frisky;
	Frisky.SetAge(5);
	Frisky.Meow();
	std::cout << "Frisky is a cat who is " << Frisky.GetAge() << " years old" << std::endl;
	Frisky.Meow();
	return 0;
}/*
Output ▼
Meow.
Frisky is a cat who is 5 years old.
Meow.*/

//Line 30 begins the body of the program with the familiar main() function. On line 32, main() declares an object called Frisky of type Cat.Read a different way, you could say that main() declares a Cat named Frisky.
//On line 33, the value 5 is assigned to the itsAge member variable by way of the SetAge() accessor method. Note that the method is called by using the object name (Frisky) followed by the member operator (.) and the method name(SetAge()).In this same way, you can call any of the other methods in a class.
//
//
//The terms member function and method can be used interchangeably.
//Line 34 calls the Meow() member function, and line 35 prints a message using the GetAge() accessor.Line 36 calls Meow() again.Although these methods are a part of a class (Cat) and are being used through an object(Frisky), they operate just like the functions you have seen before.
