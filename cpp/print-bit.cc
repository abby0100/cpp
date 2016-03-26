#include <iostream>
#include <math.h>

void func(void *pBuffer, int nSize) {

	unsigned char *pTemp = (unsigned char*)pBuffer;
	int nResult;
	for(int i = nSize - 1; i >= 0; i--) {
		for(int j = 7; j >= 0; j--) {
			nResult = pTemp[i] & (int)pow(2,j);
			nResult = (0 != nResult);
			std::cout << nResult;
		}
	}
}

int main() {

	int a = 'a';
	std::cout << "Sizeof a/int = " << (sizeof(a)) << std::endl;
	//func(&a, sizeof(a));
	for(int i = 31; i >= 0; i--) {
		std::cout << ( (a & (1 << i)) != 0 );
		if(i%8 == 0)
			std::cout << " " << (1 << i) << " " << i << " ";
	}
	std::cout << std::endl;
	return 247;
}
