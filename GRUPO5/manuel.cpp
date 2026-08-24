#include "pch.h"

using namespace System;

int mi_funcion_manuel() {
	return 0;
};

public ref class identificacion_persona {
	String^ nombre;
	int codigo;
};

public ref class producto: public identificacion_persona {
	System::String^ id_producto;
	double precio;
	int cantidad;
};

public ref class boleta: public producto {
	void Emitir_boleta() {
		// Implementación de la función para emitir la boleta
		Console::WriteLine("Boleta emitida para el {3} producto: {0} a {1} al precio de {2}", id_producto, nombre, precio, cantidad);
	}
};