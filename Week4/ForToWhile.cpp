#include <iostream>
#include <cctype>

int main() {
	int number_of_lines{0};
	std::cin >> number_of_lines;
	int line{0};
	while (line < number_of_lines){
		++line;
		char c{'a'};
		c += line;
		int element{line};
		while ( element >= 0){
			--element;
			std::cout << static_cast<char>(c + element) << element << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
