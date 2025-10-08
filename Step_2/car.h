/*********car.h**********/
 

#ifndef CAR_H
#define CAR_H


#include <cstring>
using namespace std;   //permet d'utiliser cout directement et non stdout
#include <iostream>
#include "Model.h"
#include <string>



class Car
{
	private:
		char*name;
		Model model;


	public:
		Car(); //constructeur

		Car(const char*);  //constructeur d'initialisation
		Car(const Car& c);  //constructeur de copie

		~Car(); //destructeur

		void setName(const char*n);
		void setModel(Model m);

		const char* getName() const;
		Model getModel()const;

		void display()	const;
};

#endif