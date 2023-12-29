#include<iostream>
#include<cassert>

int findGCD(int a, int b);
bool isGCD(int x, int y, int gcd);

int findGCD(int a, int b) {
	if (b == 0) {
		return a;
	}

	return findGCD(b, a % b);
}

bool isGCD(int x, int y, int gcd) {
    int min = x > y ? y : x;
    if (!(x % gcd == 0 && y % gcd == 0))
    {
        return false;
    }

    for (int i = gcd + 1; i < min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    int gcd = findGCD(x, y);
    assert(isGCD(x, y, gcd));
    std::cout << "GCD of x and y: " << gcd << std::endl;
}
