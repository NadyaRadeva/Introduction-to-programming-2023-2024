#include<iostream>
#include<cmath>

int main() {
	int a, b, c;
	std::cout << "Enter the three sides of the triangle: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
		double p = (a + b + c) / 2;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));

		double ha, hb, hc;
		ha = (2 * s) / a;
		hb = (2 * s) / b;
		hc = (2 * s) / c;
		std::cout << "ha = " << ha << ", hb = " << hb << ", hc = " << hc << std::endl;
		
		double ma, mb, mc;
		ma = sqrt(2 * b * b + 2 * c * c - a * a) / 2;
		mb = sqrt(2 * a * a + 2 * c * c - b * b) / 2;
		mc = sqrt(2 * a * a + 2 * b * b - c * c) / 2;
		std::cout << "ma = " << ma << ", mb = " << mb << ", mc = " << mc << std::endl;

		double la, lb, lc;
		la = 2 * (sqrt(b * c * p * (p - a) / (b + c)));
		lb = 2 * (sqrt(a * c * p * (p - b) / (a + c)));
		lc = 2 * (sqrt(a * b * p * (p - c) / (a + b)));
		std::cout << "la = " << la << ", lb = " << lb << ", lc = " << lc << std::endl;

		return 1;
	}
	else {
		std::cout << "The entered numbers can not be sides of a triangle." << std::endl;
		return 1;
	}

	return 1;
}
