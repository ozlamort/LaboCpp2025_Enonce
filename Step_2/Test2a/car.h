/*********car.h**********/
 

#ifndef CAR_H
#define CAR_H


#include <string>
using namespace std;   //permet d'utiliser cout directement et non stdout
#include <iostream>
#include "Model.h"
//#include "Option.h"
using namespace std;


class Car
{
	private:
		string name;
		Model model;


	public:
		Car(); //constructeur

		Car(const string& n);  //constructeur d'initialisation
		Car(const Car& c);  //constructeur de copie

		~Car(); //destructeur

		void setName(const string& n);
		void setModel(Model m);

		string getName() const;
		Model getModel()const;


		//Méthode
		void display()	const;
};



#endif