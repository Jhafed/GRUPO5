#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
	return 0;
};

public ref class concatenacionn {
	int a;
	int b;
	void concatenernumeros(int num1, int num2) {

		a = num1;
		b = num2;
		Console::WriteLine("La concatenación de los números {0} y {1} es: {2}{3}", a, b, a, b);
	};
};