#include <iostream>
#include <cstdlib>
#include <ctime>

int Random(void) {
    // Seed the Random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int seed = std::rand() % 3;
    // Generate and return the Random number
    return seed;
}

int main() {
    int min = 1;
    int max = 100;
    int RandomNum = Random();
    std::cout << "Random number between " << min << " and " << max << ": " << RandomNum << std::endl;
    return 0;
}
