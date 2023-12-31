//not written by me

#include <iostream>

// Това е решението, което казахме на практикума. То всъщност е грешно...
// Помислете защо не работи, каква допълнителна информация е нужна
/*
void wrong(char* src, unsigned srcLength, unsigned length) {
	if (!length) {
		std::cout << std::endl;
		return;
	}
	for (int i = 0; i < srcLength; i++) {
		std::cout << src[i];
		wrong(src, srcLength, length - 1);
	}
}
*/

// Ето го и правилното решение
// Проблемът в горното решение е, че като отпечатаме дума и след това променим даден символ,
// ние ще отпечатаме низ само от промяната нататък, а не като цяло новата генерирана дума от начало до край

// Например ако сме стигнали до думата "abbc" и променим символа 'c' на 'd', ние ще отпечатаме "d", а не думата "abbd" 

// Затова идеята е следната - пазим си текущ низ, който ни държи натрупаната дума до момента
// Все едно си пазим текущия път, по който сме минали в рекурсивното дърво
// Или пък може да се каже, че си пазим историята от направените избори на символ до момента
void helper(char* src, unsigned srcLength, unsigned length, char* curr, unsigned currIndex) {
	// Дъно - ако не остава какво да генерираме повече, отпечатваме генерираната дума до момента
	if (!length) {
		std::cout << curr << std::endl;
		return;
	}
	// Като искаме да генерираме дума с дължина n, гледаме какво можем да сложим на първата позиция
	// Ако src = {a, b, c}, то можем на първата позиция да сложим a, b или c
	// След това ще трябва да генерираме думи с дължина n - 1, което е просто едно рекурсивно извикване за всеки избор на първи символ
	for (int i = 0; i < srcLength; i++) {
		// Всеки път като направим избор коя буква ще изберем, трябва да си обновим и текущата генерирана дума
		curr[currIndex] = src[i];
		helper(src, srcLength, length - 1, curr, currIndex + 1);
	}
}

void genFromVocab(char* src, unsigned srcLength, unsigned length) {
	char* curr = new char[length + 1]();
	helper(src, srcLength, length, curr, 0);
	delete[] curr;
}

int main() {
	char src[] = { 'a', 'b', 'c'};
	genFromVocab(src, 3, 3);
}
