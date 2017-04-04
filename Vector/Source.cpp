#include <iostream>
#include <vector>

/*
void Vectores() {

	//Constructor sin argumentos: vector de size 0
	std::vector<int>v1;

	//Constructor con una lista de inicialización
	std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,1 });

	//Constructor de copia
	std::vector<int>v4(v12);	//del mismo tamaño que v2 y con los mismos elementos

	//Constructor con num elementos
	std::vector<int>v9(5);		//de longitud 5 inicializados en 0

	//Constructor con num de elementos
	std::vector<int>v10(5, 10);	//de longitud 5 y sus valores inicializados en 10

	//Constructor con iteradores
	std::vector<int>v7(v12.begin(), v12.end());	//copia todo el v12 usando iteradores

	//Constructor con iteradores, se puede dar un rango
	std::vector<int>v7(v12.begin() + 1, v12.end() - 1);	//copia todo el v12 menos el primer y el último

	//Constructor con iteradores, desde arrays
	int myArray[]{ 16,2,77,29 };
	std::vector<int> v20(myArray, myArray + sizeof(myArray) / sizeof(int));

	//Constructor con iteradores, desde arrays
	int *pv;
	pv = new int[4]{ 1,2,3,4 };
	std::vector<int> v21(pv, pv + 4);}*//*void ejVector() {	std::vector<int> vector1({ 28,15,12,65,1 });	std::cout << vector1.size();		//Imprime 5	std::cout << vector1.capacity();	//Imprime 5	//Inserta el elemento 2 al final. Crece dinámicamente	vector1.push_back(2);				//Complejidad: constante	std::cout << vector1.size();		//Imprime 6	std::cout << vector1.capacity();	//Imprime 7	//Inserta la posición 0 el elemento 3, desplazando los demás elementos	//Crece dinámicamente	vector1.insert(vector1.begin(), 3);	//Complejidad: lineal (num elementos: copy/move)	std::cout << vector1.size();		//Imprime 7	std::cout << vector1.capacity();	//Imprime 7}void ejDelete() {	std::vector<int> vector1({ 28,15,12,65,1 });	//Borra el último. Decrece dinámicamente su size
	vector1.pop_back();
	
	//Borra el indicado por el iterador. Decrece dinámicamente su size
	vector1.erase(vector1.begin() + 2);

	//Borra un rango de elementos. Decrece dinámicamente su size
	vector1.erase(vector1.begin(), vector1.begin() + 2);

	//Borra todos los elementos dejando el size en 0
	//La capacidad la deja en la que tenía
	vector1.clear();}void ejUpdate() {	//Permite, en particular, actualización “en masa”(asignación de un vector a otro / copia)
		
	std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,1 });
	std::vector<int>v9(5);
	v9 = v12;

	std::vector<int>v1;
	v1 = { 1,2,3,4,5,6,7 };

	std::vector<int> foo(3, 100);	//three ints with a value of 100
	std::vector<int> bar(5, 200);	//five ints with a value of 200
	foo.swap(bar);}void ejHowToIterate(){	//Usando un iterador
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
	//Lo clásico pero usando la funcion size de la clase vector
	for (int i = 0; i <= v.size()-1; i++){
		std::cout << v[i] << std::endl;
	};}*/struct Persona
{
	std::string nombre;
	int dia;
	int mes;
	int year;
	int dni;
};void A06() {	std::vector<int>v1(5);	std::vector<int>v2(10, 0);	std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });	std::vector<std::string>v4({ "Gertrudiz","Pancracia","Anacleto","Hipolito","Eustaquio","Fulgencia" });	std::vector<int>v5 = v3;	std::vector<Persona>v6({ "Salva", 26,2,1997, 56960115 }, {"Pedro", 12, 8, 1996, 26451227}, {"Juan", 5, 12, 1995, 48962445});}int AddVectors() {}int ConcatVectors() {}int ShiftRight() {}int RotateLeft() {}int SearchAdjacent() {}