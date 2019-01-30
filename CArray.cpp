#include <iostream>
#include<math.h>
#include"标头.h"

int main() {
	CArray a,b;
	for (int i = 0; i < 4; i++) {
		a.push_back(i);
	}
	b = a;
	CArray c(a);
	for (int i = 0; i < 4; i++) {
		std::cout << a[i];
	};
	std::cout << std::endl;
	b[1] = 100;
	for (int i = 0; i < 4; i++) {
		std::cout << b[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << c[i];
	}
	
	system("pause");
	return 0;
}

