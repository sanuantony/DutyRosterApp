#include "main.h"
#include "helper.h"
int main()
{
	int* test = nullptr;
	std::cout << test;
	int i = 9;
	test = &i;
	void(*funk)(const char*);// = &print;
	float (*dele)(int, int);
	funk = &print;
	dele = &add;
	print("Hello world");
	funk("hello");
	std::cout << dele(5, 8);
	std::cout << test << " -> " << *test;
	std::cin.get();
	return 0;
}