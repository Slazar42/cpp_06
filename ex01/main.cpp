#include "Serialize.hpp"
#include <iostream>

int main() {
	Serialize s;
	Data data;
	data.data = 1337;
	uintptr_t raw = s.serialize(&data);
	Data* ptr = s.deserialize(raw);
	std::cout << ptr->data << std::endl;
}