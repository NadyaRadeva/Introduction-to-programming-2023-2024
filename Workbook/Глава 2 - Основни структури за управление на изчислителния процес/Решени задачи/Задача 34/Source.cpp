#include<iostream>

int main() {
	unsigned int dayFirst;
	unsigned int hourFirst;
	unsigned int minFirst;

	unsigned int daySecond;
	unsigned int hourSecond;
	unsigned int minSecond;

	do {
		std::cout << "First day: ";
		std::cin >> dayFirst;
		std::cout << "\n Hour: ";
		std::cin >> hourFirst;
		std::cout << "\n Minutes: ";
		std::cin >> minFirst;
	} while (dayFirst <= 0 || dayFirst > 31 || hourFirst < 0 || hourFirst > 24 || minFirst < 0 || minFirst > 59);

	do {
		std::cout << "Second day: ";
		std::cin >> daySecond;
		std::cout << "\n Hour: ";
		std::cin >> hourSecond;
		std::cout << "\n Minutes: ";
		std::cin >> minSecond;
	} while (daySecond <= 0 || daySecond > 31 || hourSecond < 0 || hourSecond>24 || minSecond < 0 || minSecond>59);

	unsigned int firstMin = dayFirst * 24 * 60 + hourFirst * 60 + minFirst;
	unsigned int secondMin = daySecond * 24 * 60 + hourSecond * 60 + minSecond;

	unsigned int minutesDiff = abs((int)(firstMin - secondMin));

	unsigned int hoursInPeriod = minutesDiff / 60;
	unsigned int minutesInPeriod = minutesDiff % 60;

	std::cout << "The difference between the two moments is: " << hoursInPeriod << " hour/hours and " << minutesInPeriod << " minutes" << std::endl;

	return 1;
}
