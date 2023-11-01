#include<iostream>

int main() {
	int start, end;

	do {
		std::cout << "start = ";
		std::cin >> start;
		std::cout << "end = ";
		std::cin >> end;
	} while (start >= end);

	int step;

	do {
		std::cout << "step = ";
		std::cin >> step;
	} while (step < 1);

	int sum = 0;

	for (size_t i = start; i <= end; i += step) {
		sum = sum + i;
	}

	std::cout << "The sum of the numbers from " << start << " to " << end << " with step " << step << " is: " << sum << std::endl;

	return 1;
}
