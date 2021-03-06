#include <iostream>
#include "Crypt.h"

void call_from_here(char *Str)
{
	char Text[] = __ENCRYPT64("Unfortunately you can't use __SHIFT in cout or printf");
	std::cout << __DECRYPT64(Text) << " | " << Str << std::endl;
}

int main()
{
	char EncodedStr[] = __ENCRYPT64("Any other 64 char size string works!");
	char EncodedStr2[] = __ENCRYPT64("Another char array!");
	char EncodedStr3[] = __ENCRYPT64("LOOOL IM INVISIBLE");
	char EncodedStr4[] = __ENCRYPT64("CALL Me Mayybee!!??");

	std::cout << "SHIFT KEY = " << __SHIFT_KEY << std::endl;
	std::cout << EncodedStr << std::endl;
	std::cout << EncodedStr2 << std::endl;
	std::cout << EncodedStr3 << std::endl;
	std::cout << EncodedStr4 << std::endl
			  << std::endl;

	std::cout << "(VISIBLE) Decrypted strings: " << std::endl;

	call_from_here(__DECRYPT64(EncodedStr));
	call_from_here(__DECRYPT64(EncodedStr2));
	call_from_here(__DECRYPT64(EncodedStr3));
	call_from_here(__DECRYPT64(EncodedStr4));

	std::cout << std::endl
			  << "(VISIBLE) Now our strings are decrypted and we call them normally: " << std::endl;

	call_from_here(EncodedStr);
	call_from_here(EncodedStr2);
	call_from_here(EncodedStr3);
	call_from_here(EncodedStr4);

	std::cin.get();

	return 0;
}
