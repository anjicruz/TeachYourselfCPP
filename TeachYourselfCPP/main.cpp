#include <iostream>
void DemonstrationFUnction() {
	std::cout << "In Demonstration Function\n";
}
int main() {
	std::cout << "In Main\n";
	DemonstrationFUnction();
	std::cout << "Back in main\n";
	return 0;
}