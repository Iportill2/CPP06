

#ifndef CLASES_HPP
# define CLASES_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base(void) {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

class D :

#endif

/*
dynamic_cast es un operador en C++ que se utiliza para convertir 
punteros o referencias a clases en punteros o referencias a otras 
clases en la jerarquía de herencia. Se utiliza principalmente para 
la conversión segura durante la herencia polimórfica.

Aquí está cómo funciona:
Base* basePtr = new Derived();
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
;
En este ejemplo, basePtr es un puntero a la clase base Base, pero en 
realidad apunta a un objeto de la clase derivada Derived. dynamic_cast<Derived*>(basePtr) 
convierte basePtr a un puntero a Derived.

Si la conversión es segura (es decir, basePtr realmente apunta a un objeto de Derived), 
dynamic_cast devuelve un puntero válido. Si la conversión no es segura (es decir, basePtr 
no apunta a un objeto de Derived), dynamic_cast devuelve un puntero nulo.

En tu caso, A &a = dynamic_cast<A&>(p); intenta convertir p a una referencia a A. Si 
p es de tipo A o derivado de A, la conversión es segura y a se convierte en una 
referencia a p. Si p no es de tipo A ni derivado de A, se lanza una excepción std::bad_cast.

Es importante tener en cuenta que dynamic_cast requiere que las clases 
involucradas sean polimórficas, lo que significa que deben tener al menos 
un miembro de función virtual. Si intentas usar dynamic_cast con clases no polimórficas, 
obtendrás un error de compilación.

*/