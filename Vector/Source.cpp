#include <iostream>
#include <vector>

/*
void Vectores() {

	//Constructor sin argumentos: vector de size 0
	std::vector<int>v1;

	//Constructor con una lista de inicializaci�n
	std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,1 });

	//Constructor de copia
	std::vector<int>v4(v12);	//del mismo tama�o que v2 y con los mismos elementos

	//Constructor con num elementos
	std::vector<int>v9(5);		//de longitud 5 inicializados en 0

	//Constructor con num de elementos
	std::vector<int>v10(5, 10);	//de longitud 5 y sus valores inicializados en 10

	//Constructor con iteradores
	std::vector<int>v7(v12.begin(), v12.end());	//copia todo el v12 usando iteradores

	//Constructor con iteradores, se puede dar un rango
	std::vector<int>v7(v12.begin() + 1, v12.end() - 1);	//copia todo el v12 menos el primer y el �ltimo

	//Constructor con iteradores, desde arrays
	int myArray[]{ 16,2,77,29 };
	std::vector<int> v20(myArray, myArray + sizeof(myArray) / sizeof(int));

	//Constructor con iteradores, desde arrays
	int *pv;
	pv = new int[4]{ 1,2,3,4 };
	std::vector<int> v21(pv, pv + 4);
	vector1.pop_back();
	
	//Borra el indicado por el iterador. Decrece din�micamente su size
	vector1.erase(vector1.begin() + 2);

	//Borra un rango de elementos. Decrece din�micamente su size
	vector1.erase(vector1.begin(), vector1.begin() + 2);

	//Borra todos los elementos dejando el size en 0
	//La capacidad la deja en la que ten�a
	vector1.clear();
		
	std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,1 });
	std::vector<int>v9(5);
	v9 = v12;

	std::vector<int>v1;
	v1 = { 1,2,3,4,5,6,7 };

	std::vector<int> foo(3, 100);	//three ints with a value of 100
	std::vector<int> bar(5, 200);	//five ints with a value of 200
	foo.swap(bar);
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
		std::cout << *it << " ";
	};

	//C++11 Range-based for loop to iterate through the array.
	for (int e : v) {	// Access by value using a copy declared as a specific type.
						// Not preferred.
	std::cout << e << " ";
	};

	//C++11 The auto keyword causes type inference to be used. Preferred.
	//Igual que el caso anterior pero usando auto
	for (auto e : v) {		//Copy of 'v', almost always undesirable
	std::cout << e << " ";
	};

	//C++11
	for (auto &e : v) { // Type inference by reference.
						// Preferred when modify is needed.
		std::cout << e << " ";
	}

	//C++11
	for (const auto &e : v) { // Type inference by reference.
							  //
		std::cout << e << " ";
	}
	//Lo cl�sico pero usando la funcion size de la clase vector
	for (int i = 0; i <= v.size()-1; i++){
		std::cout << v[i] << std::endl;
	};
{
	std::string nombre;
	int dia;
	int mes;
	int year;
	int dni;
};